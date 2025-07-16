/********************************************************************************
** Form generated from reading UI file 'staffwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFWINDOW_H
#define UI_STAFFWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_StaffWindow
{
public:
    QLabel *label;
    QPushButton *pushButtonViewInv;
    QPushButton *pushButtonlogout;
    QLabel *label_2;
    QListWidget *listWidgetInv;

    void setupUi(QDialog *StaffWindow)
    {
        if (StaffWindow->objectName().isEmpty())
            StaffWindow->setObjectName("StaffWindow");
        StaffWindow->resize(746, 589);
        label = new QLabel(StaffWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 140, 141, 31));
        pushButtonViewInv = new QPushButton(StaffWindow);
        pushButtonViewInv->setObjectName("pushButtonViewInv");
        pushButtonViewInv->setGeometry(QRect(180, 220, 131, 41));
        pushButtonlogout = new QPushButton(StaffWindow);
        pushButtonlogout->setObjectName("pushButtonlogout");
        pushButtonlogout->setGeometry(QRect(370, 220, 111, 41));
        label_2 = new QLabel(StaffWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(270, 340, 191, 101));
        listWidgetInv = new QListWidget(StaffWindow);
        listWidgetInv->setObjectName("listWidgetInv");
        listWidgetInv->setGeometry(QRect(130, 290, 451, 241));

        retranslateUi(StaffWindow);

        QMetaObject::connectSlotsByName(StaffWindow);
    } // setupUi

    void retranslateUi(QDialog *StaffWindow)
    {
        StaffWindow->setWindowTitle(QCoreApplication::translate("StaffWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("StaffWindow", "Welcome!", nullptr));
        pushButtonViewInv->setText(QCoreApplication::translate("StaffWindow", "View Inventory", nullptr));
        pushButtonlogout->setText(QCoreApplication::translate("StaffWindow", "Logout", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StaffWindow: public Ui_StaffWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFWINDOW_H
