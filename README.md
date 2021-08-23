# NetSolutions

Author: Hammou Aiman, Dong Jiahao, Biondani Lorenzo
Tecnologie usate: QT e wincap 
Linguaggio utilizzato: C++ 
Sezionamento progetto: Parser , Sniffer e GUI

Problema che vuole risolvere: Controllo e gestione del flusso di rete per processi e dispositivi connessi alla rete per prevenire lag spikes ed un miglior controllo di quest'ultimo.

Il progetto nasce da una necessità, più marcata in passato, di monitorare il traffico della rete per capire quale dispositivo oppure processo stava consumando più banda;
Permettendo il bandwidth throttling sui processi e possibilmente su altri dispositivi ( quest'ultima funzione è riservata all'amministratore)

Il funzionamento prevede strategie per prevenire scorciatoie e possibili fughe di dati da parte di processi fantasma.

Prevede anche una scannerizzazione della rete per rilevare possibili nuovi dispositivi; nel caso di reti più complesse il programma prevede quelle che noi chiamiamo "guardie stazionari" che svolgono il lavoro di controllo sulle varie sottoretti che il programma principale rileva e organizza.

Stato: versione 0.01 che per ora prevede solo la lettura dei pacchetti che entrano o escono.

Link Presentazione: https://docs.google.com/presentation/d/1C1uYRIqBwxyZcCOlrtAl5PXVxuiAm7hq1fg6iXJ5D2M/edit?usp=sharing

Immagine della GUI: ( estratto dalla presentazione )
![NetSolutions](https://user-images.githubusercontent.com/34747332/130460394-e3f124ec-8962-4ccf-ba4c-001c818779ba.png)
