/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *Sniffer;
    QLabel *label_2;
    QLabel *label_3;
    QListWidget *listWidget;
    QScrollBar *verticalScrollBar_2;
    QComboBox *comboBox;
    QWidget *Limiter;
    QListWidget *listWidget_2;
    QScrollBar *verticalScrollBar;
    QLabel *label_4;
    QSpinBox *spinBox;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *spinBox_2;
    QLabel *label_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 500);
        QIcon icon;
        icon.addFile(QStringLiteral("../logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 90, 811, 411));
        Sniffer = new QWidget();
        Sniffer->setObjectName(QStringLiteral("Sniffer"));
        Sniffer->setEnabled(true);
        label_2 = new QLabel(Sniffer);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 250, 200, 111));
        label_2->setFrameShape(QFrame::Box);
        label_2->setLineWidth(1);
        label_3 = new QLabel(Sniffer);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 250, 200, 111));
        label_3->setFrameShape(QFrame::Box);
        label_3->setFrameShadow(QFrame::Plain);
        label_3->setLineWidth(1);
        listWidget = new QListWidget(Sniffer);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 30, 750, 200));
        verticalScrollBar_2 = new QScrollBar(Sniffer);
        verticalScrollBar_2->setObjectName(QStringLiteral("verticalScrollBar_2"));
        verticalScrollBar_2->setGeometry(QRect(750, 30, 16, 200));
        verticalScrollBar_2->setOrientation(Qt::Vertical);
        comboBox = new QComboBox(Sniffer);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(460, 250, 311, 31));
        tabWidget->addTab(Sniffer, QString());
        Limiter = new QWidget();
        Limiter->setObjectName(QStringLiteral("Limiter"));
        Limiter->setEnabled(false);
        Limiter->setCursor(QCursor(Qt::ForbiddenCursor));
        listWidget_2 = new QListWidget(Limiter);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(20, 30, 750, 200));
        verticalScrollBar = new QScrollBar(Limiter);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(750, 30, 16, 200));
        verticalScrollBar->setOrientation(Qt::Vertical);
        label_4 = new QLabel(Limiter);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 260, 280, 40));
        label_4->setFrameShape(QFrame::Box);
        label_4->setLineWidth(1);
        spinBox = new QSpinBox(Limiter);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(340, 260, 100, 40));
        label_5 = new QLabel(Limiter);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(460, 260, 40, 40));
        label_6 = new QLabel(Limiter);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 330, 280, 40));
        label_6->setFrameShape(QFrame::Box);
        label_6->setLineWidth(1);
        spinBox_2 = new QSpinBox(Limiter);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(340, 330, 100, 40));
        label_7 = new QLabel(Limiter);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(460, 330, 40, 40));
        pushButton = new QPushButton(Limiter);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(510, 270, 40, 20));
        pushButton_2 = new QPushButton(Limiter);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 340, 40, 20));
        tabWidget->addTab(Limiter, QString());
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 401, 51));
        label->setStyleSheet(QStringLiteral("font: 25 36pt \"DengXian Light\";"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "NetSolutions", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "HEX etc.....", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Packets.. source...destination...etcc..", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "Default", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "2nd item", nullptr));

#ifndef QT_NO_ACCESSIBILITY
        comboBox->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        comboBox->setCurrentText(QApplication::translate("MainWindow", "Default", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Sniffer), QApplication::translate("MainWindow", "Sniffer", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Download speed limit :", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Kb/s", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Upload speed limit :", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Kb/s", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "OK", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "OK", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Limiter), QApplication::translate("MainWindow", "Limiter", nullptr));
        label->setText(QApplication::translate("MainWindow", "NetSolutions++", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
