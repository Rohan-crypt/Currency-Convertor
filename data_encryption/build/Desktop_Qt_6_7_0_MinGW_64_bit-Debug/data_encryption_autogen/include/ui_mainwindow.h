/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_File;
    QAction *actionSave_File;
    QAction *actionClose_File;
    QWidget *centralwidget;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QComboBox *comboBox;
    QLabel *label;
    QSpinBox *spinBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QFontComboBox *fontComboBox;
    QSpinBox *spinBox_2;
    QLabel *letter;
    QLabel *words;
    QLabel *line;
    QLabel *label_2;
    QLabel *label_4;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menufile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 650);
        MainWindow->setMaximumSize(QSize(800, 650));
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName("actionOpen_File");
        actionSave_File = new QAction(MainWindow);
        actionSave_File->setObjectName("actionSave_File");
        actionClose_File = new QAction(MainWindow);
        actionClose_File->setObjectName("actionClose_File");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(0, 80, 400, 450));
        plainTextEdit->setMaximumSize(QSize(400, 450));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(11);
        plainTextEdit->setFont(font);
        plainTextEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(560, 570, 91, 30));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(400, 80, 400, 450));
        textBrowser->setMaximumSize(QSize(400, 450));
        textBrowser->setFont(font);
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(400, 40, 131, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(560, 40, 31, 31));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(590, 40, 121, 31));
        spinBox->setMaximum(999999999);
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(410, 10, 92, 20));
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(600, 10, 92, 20));
        fontComboBox = new QFontComboBox(centralwidget);
        fontComboBox->setObjectName("fontComboBox");
        fontComboBox->setGeometry(QRect(0, 40, 141, 31));
        spinBox_2 = new QSpinBox(centralwidget);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(150, 40, 71, 31));
        spinBox_2->setMinimum(9);
        spinBox_2->setMaximum(30);
        letter = new QLabel(centralwidget);
        letter->setObjectName("letter");
        letter->setGeometry(QRect(0, 540, 55, 21));
        words = new QLabel(centralwidget);
        words->setObjectName("words");
        words->setGeometry(QRect(60, 540, 55, 21));
        line = new QLabel(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(120, 540, 55, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 20, 49, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 20, 49, 16));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        menufile = new QMenu(menubar);
        menufile->setObjectName("menufile");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menufile->menuAction());
        menufile->addAction(actionOpen_File);
        menufile->addAction(actionSave_File);
        menufile->addAction(actionClose_File);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_File->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        actionSave_File->setText(QCoreApplication::translate("MainWindow", "Save File", nullptr));
        actionClose_File->setText(QCoreApplication::translate("MainWindow", "Save Encrypted Data", nullptr));
        plainTextEdit->setPlainText(QString());
        plainTextEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Start Writing...", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Encrypt Data", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">Output....</span></p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Substitution Cipher", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "ROT 13 ", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Caesar Cipher", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "KEY:", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "ENCRYPT", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "DECRYPT", nullptr));
        letter->setText(QCoreApplication::translate("MainWindow", "Letter : ", nullptr));
        words->setText(QCoreApplication::translate("MainWindow", "Words : ", nullptr));
        line->setText(QCoreApplication::translate("MainWindow", "Lines : ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Font", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Font size", nullptr));
        menufile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
