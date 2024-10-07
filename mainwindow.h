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
    void on_btn_C_clicked();

    void on_btn_7_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_txt_output_textChanged();

    void on_btn_plus_clicked();

private:
    Ui::MainWindow *ui;
    int firstNum = 0;
    int secondNum = 0;
    bool operation = false;
};
#endif // MAINWINDOW_H
