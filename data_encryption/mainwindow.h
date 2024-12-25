#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_radioButton_clicked();

    void on_radioButton_clicked(bool checked);

    void on_radioButton_2_clicked(bool checked);

    void on_fontComboBox_currentFontChanged(const QFont &f);

    void on_spinBox_2_valueChanged(int arg1);

    void on_plainTextEdit_textChanged();

    void on_actionOpen_File_triggered();

    void on_actionSave_File_triggered();

    void on_actionClose_File_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
