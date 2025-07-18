#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginWindow;
}
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();


private slots:
    void on_Push_ButtonClear_clicked();

    void on_pushButtonLogin_clicked();

private:
    Ui::LoginWindow *ui;
};
#endif // LOGINWINDOW_H
