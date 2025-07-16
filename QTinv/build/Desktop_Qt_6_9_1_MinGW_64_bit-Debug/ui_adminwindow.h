/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QLabel *labelAdmin;
    QPushButton *pushButtonAddUser;
    QPushButton *pushButtonRemoveUser;
    QPushButton *pushButtonViewUsers;
    QPushButton *pushButtonLogout;
    QLabel *LabelUsername;
    QLabel *labelPassword;
    QLabel *labelRole;
    QLineEdit *lineEdituser;
    QLineEdit *lineEditpassword;
    QComboBox *comboBoxRole;
    QTextEdit *textEditUsers;
    QPushButton *pushButton;

    void setupUi(QDialog *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName("AdminWindow");
        AdminWindow->resize(821, 549);
        labelAdmin = new QLabel(AdminWindow);
        labelAdmin->setObjectName("labelAdmin");
        labelAdmin->setGeometry(QRect(350, 80, 121, 21));
        pushButtonAddUser = new QPushButton(AdminWindow);
        pushButtonAddUser->setObjectName("pushButtonAddUser");
        pushButtonAddUser->setGeometry(QRect(80, 240, 93, 29));
        pushButtonRemoveUser = new QPushButton(AdminWindow);
        pushButtonRemoveUser->setObjectName("pushButtonRemoveUser");
        pushButtonRemoveUser->setGeometry(QRect(190, 240, 111, 31));
        pushButtonViewUsers = new QPushButton(AdminWindow);
        pushButtonViewUsers->setObjectName("pushButtonViewUsers");
        pushButtonViewUsers->setGeometry(QRect(320, 240, 93, 29));
        pushButtonLogout = new QPushButton(AdminWindow);
        pushButtonLogout->setObjectName("pushButtonLogout");
        pushButtonLogout->setGeometry(QRect(590, 240, 93, 29));
        LabelUsername = new QLabel(AdminWindow);
        LabelUsername->setObjectName("LabelUsername");
        LabelUsername->setGeometry(QRect(140, 120, 131, 20));
        labelPassword = new QLabel(AdminWindow);
        labelPassword->setObjectName("labelPassword");
        labelPassword->setGeometry(QRect(140, 160, 63, 20));
        labelRole = new QLabel(AdminWindow);
        labelRole->setObjectName("labelRole");
        labelRole->setGeometry(QRect(140, 200, 63, 20));
        lineEdituser = new QLineEdit(AdminWindow);
        lineEdituser->setObjectName("lineEdituser");
        lineEdituser->setGeometry(QRect(260, 120, 371, 26));
        lineEditpassword = new QLineEdit(AdminWindow);
        lineEditpassword->setObjectName("lineEditpassword");
        lineEditpassword->setGeometry(QRect(260, 160, 371, 26));
        lineEditpassword->setEchoMode(QLineEdit::EchoMode::Password);
        comboBoxRole = new QComboBox(AdminWindow);
        comboBoxRole->addItem(QString());
        comboBoxRole->addItem(QString());
        comboBoxRole->addItem(QString());
        comboBoxRole->setObjectName("comboBoxRole");
        comboBoxRole->setGeometry(QRect(260, 200, 76, 26));
        textEditUsers = new QTextEdit(AdminWindow);
        textEditUsers->setObjectName("textEditUsers");
        textEditUsers->setGeometry(QRect(160, 310, 441, 211));
        pushButton = new QPushButton(AdminWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(432, 240, 141, 29));

        retranslateUi(AdminWindow);

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QDialog *AdminWindow)
    {
        AdminWindow->setWindowTitle(QCoreApplication::translate("AdminWindow", "Dialog", nullptr));
        labelAdmin->setText(QCoreApplication::translate("AdminWindow", "Welcome Admin!", nullptr));
        pushButtonAddUser->setText(QCoreApplication::translate("AdminWindow", "Add User", nullptr));
        pushButtonRemoveUser->setText(QCoreApplication::translate("AdminWindow", "Remove User", nullptr));
        pushButtonViewUsers->setText(QCoreApplication::translate("AdminWindow", "View Users", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("AdminWindow", "Logout", nullptr));
        LabelUsername->setText(QCoreApplication::translate("AdminWindow", "Username", nullptr));
        labelPassword->setText(QCoreApplication::translate("AdminWindow", "Password", nullptr));
        labelRole->setText(QCoreApplication::translate("AdminWindow", "Role", nullptr));
        comboBoxRole->setItemText(0, QCoreApplication::translate("AdminWindow", "Admin", nullptr));
        comboBoxRole->setItemText(1, QCoreApplication::translate("AdminWindow", "Manager", nullptr));
        comboBoxRole->setItemText(2, QCoreApplication::translate("AdminWindow", "Staff", nullptr));

        pushButton->setText(QCoreApplication::translate("AdminWindow", "Access Inventory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
