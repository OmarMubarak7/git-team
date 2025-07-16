/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QLabel *UsernameLogin;
    QLabel *PasswordLogin;
    QLabel *label_3;
    QLineEdit *lineEditUser;
    QLineEdit *lineEditPassword;
    QPushButton *pushButtonLogin;
    QPushButton *Push_ButtonClear;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(800, 600);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        UsernameLogin = new QLabel(centralwidget);
        UsernameLogin->setObjectName("UsernameLogin");
        UsernameLogin->setGeometry(QRect(70, 100, 231, 20));
        PasswordLogin = new QLabel(centralwidget);
        PasswordLogin->setObjectName("PasswordLogin");
        PasswordLogin->setGeometry(QRect(70, 160, 111, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(300, 50, 351, 20));
        lineEditUser = new QLineEdit(centralwidget);
        lineEditUser->setObjectName("lineEditUser");
        lineEditUser->setGeometry(QRect(220, 100, 351, 26));
        lineEditPassword = new QLineEdit(centralwidget);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(220, 160, 351, 26));
        lineEditPassword->setEchoMode(QLineEdit::EchoMode::Password);
        pushButtonLogin = new QPushButton(centralwidget);
        pushButtonLogin->setObjectName("pushButtonLogin");
        pushButtonLogin->setGeometry(QRect(240, 250, 93, 29));
        Push_ButtonClear = new QPushButton(centralwidget);
        Push_ButtonClear->setObjectName("Push_ButtonClear");
        Push_ButtonClear->setGeometry(QRect(430, 250, 93, 29));
        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        UsernameLogin->setText(QCoreApplication::translate("LoginWindow", "Username", nullptr));
        PasswordLogin->setText(QCoreApplication::translate("LoginWindow", "Password ", nullptr));
        label_3->setText(QCoreApplication::translate("LoginWindow", "Login Page", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        Push_ButtonClear->setText(QCoreApplication::translate("LoginWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
