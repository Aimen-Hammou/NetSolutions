#include "stdafx.h"
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>

#include <cstdio>

#include <memory>
#include <stdexcept>

#include <array>


class Network_parser {
	private:
		std::string default_gateway;
		std::string connection_prefix;
		std::map<std::string, std::string> host_ip_table;

		std::string retrieve_class(int);
		void retrieve_host_name_and_ip(std::vector<std::string>);
		std::string extrapolate_hostname_ip(std::string, std::string, std::string);
		
	public:
		Network_parser(std::string default_gateway);
		
		void get_connection_prefix();
		void exec();
		void get_hostsname_ip();
		void print_net_table();
};

Network_parser::Network_parser(std::string default_gateway)
{
	this->default_gateway = default_gateway;
}

std::string
Network_parser::retrieve_class(int value)
{
	if (value >= 1 && value <= 126) return "/8";
	else if (value >= 128 && value <= 191) return "/16";
	else if (value >= 192 && value <= 223) return "/24";
	else if (value >= 224 && value <= 239) return "/32";
}

std::string
Network_parser::extrapolate_hostname_ip(std::string source, std::string start, std::string end)
{
		std::string empty_string = "";
		std::size_t start_index = source.find(start);


		if (start_index == std::string::npos)
		{
			return empty_string;
		}


		start_index += start.length();


		std::string::size_type end_index = source.find(end, start_index);


		return source.substr(start_index, end_index - start_index);
	
}

void
Network_parser::retrieve_host_name_and_ip(std::vector<std::string> extrapolated_lines)
{
	for (std::string s : extrapolated_lines)
	{
		this->host_ip_table.insert(std::make_pair<std::string, std::string>(extrapolate_hostname_ip(s, "for ", " ("),extrapolate_hostname_ip(s, "(", ")")));
	}
}

void
Network_parser::get_connection_prefix()
{
	std::string delimiter = ".";

	std::string token = this->default_gateway.substr(0, this->default_gateway.find(delimiter));
	
	this->connection_prefix = this->retrieve_class(atoi(token.c_str()));
}

void
Network_parser::exec()
{
	std::array<char, 128> buffer;
	std::string result;
	std::string command = "nmap -sP " + this->default_gateway + this->connection_prefix + " > host_file.txt";
	std::cout << command << std::endl;
	

	std::unique_ptr<FILE, decltype(&_pclose)> pipe(_popen(command.c_str(), "r"), _pclose);
	if (!pipe) throw std::runtime_error("popen() failed!");
	while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
		result += buffer.data();
	}
	
}

void
Network_parser::get_hostsname_ip()
{
	std::vector<std::string> host_ip_vector;
	std::string is_ip_line;
	std::ifstream input("host_file.txt");

	for (std::string line; getline(input, line);)
	{
		is_ip_line = line.substr(0, line.find_first_of(" ")); // Anche line.find(" ") funziona, ma per evitare futuri problemi opto per find_first_of
		if (is_ip_line == "Nmap")
		{
			host_ip_vector.push_back(line);
		}	
	}
	host_ip_vector.pop_back();
	this->retrieve_host_name_and_ip(host_ip_vector);
	input.close();
}

void
Network_parser::print_net_table()
{
	for (auto it = host_ip_table.begin(); it != this->host_ip_table.end(); ++it)
	{
		std::cout << it->first << " " << it->second << std::endl;
	}
}

int main()
{
	/*Network_parser prova("192.168.1.1");
	prova.get_connection_prefix();
	prova.exec_and_file_save();
	prova.get_hostsname_ip();
	prova.print_net_table();
	system("PAUSE");*/

	Network_parser prova("192.168.1.*");
	prova.get_connection_prefix();
	prova.exec();
	prova.get_hostsname_ip();
	prova.print_net_table();
	system("Pause");
	return 0;
}