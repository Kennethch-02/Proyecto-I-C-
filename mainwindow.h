#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QTcpSocket>
#include <update_text.h>
#include <json.h>
#include <message.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class QTcpSocket;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void Connect();
private slots:
    void on_BTN_RUN_clicked();
    void on_BTN_STOP_clicked();
    void on_BTN_NEXT_clicked();
    void on_TEXT_CODE_textChanged();
private:
    void Send_Message();
    void Interpreter();
    void check_code();
    int List_size;
    int Line;
    bool in_struct;
    Ui::MainWindow *ui;
    QTcpSocket *mSocket;
    message received_message;
    message Message;
    json Json;
    QString Code;
    QStringList List_Code;
    QStringList variables;
    QStringList Errors;

};
#endif // MAINWINDOW_H
