#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <string>
#include <random>
#include <iostream>
#include <QFileDialog>
std::string encryptCaesarCipher(const std::string& message, int shift);
std::string encryptCaesarCipher(const std::string& message, int shift) {
    std::string encryptedMessage;
    for (char c : message) {
        if (std::isupper(c)) {
            encryptedMessage += (c - 'A' + shift) % 26 + 'A';
        }
        else if (std::islower(c)) {
            encryptedMessage += (c - 'a' + shift) % 26 + 'a';
        }
        else {
            encryptedMessage += c;
        }
    }
    return encryptedMessage;
}
std::string decryptCaesarCipher(const std::string& message, int shift);
std::string decryptCaesarCipher(const std::string& message, int shift) {
    return encryptCaesarCipher(message, 26 - shift);
}
std::string encryptsubstitutioncipher(const std::string& s, long seed);
std::string encryptsubstitutioncipher(const std::string& s, long seed) {
    std::string text = s;
    short list[95];
    for (short i = 32; i < 127; i++) {
        list[i - 32] = i;
    }
    std::mt19937 rng(seed);
    for (int i = 94; i > 0; i--) {
        std::uniform_int_distribution<int> dist(0, i);
        int j = dist(rng);
        short temp = list[i];
        list[i] = list[j];
        list[j] = temp;
    }
    for (size_t i = 0; i < text.length(); i++) {
        char ch = text[i];
        if (ch >= 32 && ch < 127) {
            text[i] = static_cast<char>(list[ch - 32]);
        }
    }
    return text;
}
std::string decryptsubstitutioncipher(const std::string& s, long seed);
std::string decryptsubstitutioncipher(const std::string& s, long seed) {
    std::string text = s;
    short list[95];
    for (short i = 32; i < 127; i++) {
        list[i - 32] = i;
    }
    std::mt19937 rng(seed);
    for (int i = 94; i > 0; i--) {
        std::uniform_int_distribution<int> dist(0, i);
        int j = dist(rng);
        short temp = list[i];
        list[i] = list[j];
        list[j] = temp;
    }
    for (size_t i = 0; i < text.length(); i++) {
        char ch = text[i];
        if (ch >= 32 && ch < 127) {
            int index = 0;
            for (int j = 0; j < 95; j++) {
                if (ch == list[j]) {
                    index = j;
                    break;
                }
            }
            text[i] = static_cast<char>(index + 32);
        }
    }
    return text;
}
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int type=ui->comboBox->currentIndex();
    bool encrypt=ui->radioButton->isChecked();
    int key=13;
    if(type!=1){key=ui->spinBox->value();}
    if(type==0)
    {
        if(encrypt)
        {
            QString text =ui->plainTextEdit->toPlainText();
            std::string str = text.toStdString();
            ui->textBrowser->setPlainText(text);
            ui->textBrowser->setPlainText(QString::fromStdString(encryptsubstitutioncipher(str,key)));
        }else{
            QString text =ui->plainTextEdit->toPlainText();
            std::string str = text.toStdString();
            ui->textBrowser->setPlainText(text);
            ui->textBrowser->setPlainText(QString::fromStdString(decryptsubstitutioncipher(str,key)));
        }
    }else if(type==1)
    {
        if(encrypt)
        {
            QString text =ui->plainTextEdit->toPlainText();
            std::string str = text.toStdString();
            ui->textBrowser->setPlainText(text);
            ui->textBrowser->setPlainText(QString::fromStdString(encryptCaesarCipher(str,13)));
        }else{
            QString text =ui->plainTextEdit->toPlainText();
            std::string str = text.toStdString();
            ui->textBrowser->setPlainText(text);
            ui->textBrowser->setPlainText(QString::fromStdString(decryptCaesarCipher(str,13)));
        }
    }else{
        if(encrypt)
        {
            QString text =ui->plainTextEdit->toPlainText();
            std::string str = text.toStdString();
            ui->textBrowser->setPlainText(text);
            ui->textBrowser->setPlainText(QString::fromStdString(encryptCaesarCipher(str,key)));
        }else{
            QString text =ui->plainTextEdit->toPlainText();
            std::string str = text.toStdString();
            ui->textBrowser->setPlainText(text);
            ui->textBrowser->setPlainText(QString::fromStdString(decryptCaesarCipher(str,key)));
        }
    }
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    if(index==1)
    {
        ui->spinBox->setDisabled(true);
    }else if(index==2)
    {
        ui->spinBox->setDisabled(false);
        ui->spinBox->setMaximum(25);
    }else{
        ui->spinBox->setDisabled(false);
        ui->spinBox->setMaximum(999999999);
    }
}

void MainWindow::on_radioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->pushButton->setText("Encrypt Data");
    }
}

void MainWindow::on_radioButton_clicked()
{
}

void MainWindow::on_radioButton_2_clicked(bool checked)
{
    if(checked)
    {
        ui->pushButton->setText("Decrypt Data");
    }
}


void MainWindow::on_fontComboBox_currentFontChanged(const QFont &f)
{
    QFont font=ui->fontComboBox->currentFont();
    font.setPointSize(ui->spinBox_2->value());
    ui->plainTextEdit->setFont(font);
}


void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    QFont font=ui->fontComboBox->currentFont();
    font.setPointSize(arg1);
    ui->plainTextEdit->setFont(font);
}


void MainWindow::on_plainTextEdit_textChanged()
{
    QString text=ui->plainTextEdit->toPlainText();
    int letterCount=0;
    for (int i = 0; i < text.length(); ++i) {
        if (text.at(i).isLetter()) {
            ++letterCount;
        }
    }
    ui->letter->setText("Letter: "+QString::number(letterCount));
    QStringList lines = text.split("\n");
    int lineCount = lines.size();
    ui->line->setText("Lines: "+QString::number(lineCount));
    QStringList wrds = text.split(" ");
    int wordCount = wrds.size();
    ui->words->setText("Words: "+QString::number(wordCount));
}


void MainWindow::on_actionOpen_File_triggered()
{
    QString filePath=QFileDialog::getOpenFileName(this,tr("Open File"),"C://","Text Files (*.txt)");
    if (filePath.isEmpty()) {
        qDebug() << "No file selected.";
        return ;
    }
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file:" << file.errorString();
        return ;
    }
    QTextStream in(&file);
    QString fileContents = in.readAll();
    file.close();
    ui->plainTextEdit->setPlainText(fileContents);
}


void MainWindow::on_actionSave_File_triggered()
{
    QString filePath = QFileDialog::getSaveFileName(this, "Save Text File", "", "Text Files (*.txt)");
    if (filePath.isEmpty()) {
        qDebug() << "No file selected.";
        return ;
    }
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file for writing:" << file.errorString();
        return ;
    }
    QTextStream out(&file);
    out << ui->plainTextEdit->toPlainText();
    file.close();
}


void MainWindow::on_actionClose_File_triggered()
{
    QString filePath = QFileDialog::getSaveFileName(this, "Save Text File", "", "Text Files (*.txt)");
    if (filePath.isEmpty()) {
        qDebug() << "No file selected.";
        return ;
    }
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file for writing:" << file.errorString();
        return ;
    }
    QTextStream out(&file);
    out << ui->textBrowser->toPlainText();
    file.close();
}

