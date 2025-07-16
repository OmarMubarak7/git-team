/********************************************************************************
** Form generated from reading UI file 'managerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERWINDOW_H
#define UI_MANAGERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ManagerWindow
{
public:
    QLabel *label;
    QPushButton *pushButtonAdditem;
    QPushButton *pushButtonViewinv;
    QPushButton *pushButtonlogout;
    QListWidget *listWidgetInv;
    QLabel *label_2;
    QComboBox *comboBoxItemType;
    QLabel *label_3;
    QLineEdit *lineEditBrand;
    QLabel *label_4;
    QLineEdit *lineEditCategory;
    QLineEdit *lineEditsup;
    QLabel *label_5;
    QCheckBox *checkBoxConsumable;
    QLabel *labelItemID;
    QLineEdit *lineEditItemID;
    QLineEdit *lineEditName;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEditDesc;
    QSpinBox *spinBoxQuantity;
    QLabel *label_8;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBoxPrice;
    QPushButton *pushButtonReport;

    void setupUi(QDialog *ManagerWindow)
    {
        if (ManagerWindow->objectName().isEmpty())
            ManagerWindow->setObjectName("ManagerWindow");
        ManagerWindow->resize(1012, 657);
        label = new QLabel(ManagerWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(460, 20, 141, 41));
        pushButtonAdditem = new QPushButton(ManagerWindow);
        pushButtonAdditem->setObjectName("pushButtonAdditem");
        pushButtonAdditem->setGeometry(QRect(180, 250, 93, 29));
        pushButtonViewinv = new QPushButton(ManagerWindow);
        pushButtonViewinv->setObjectName("pushButtonViewinv");
        pushButtonViewinv->setGeometry(QRect(320, 250, 121, 31));
        pushButtonlogout = new QPushButton(ManagerWindow);
        pushButtonlogout->setObjectName("pushButtonlogout");
        pushButtonlogout->setGeometry(QRect(660, 250, 93, 29));
        listWidgetInv = new QListWidget(ManagerWindow);
        listWidgetInv->setObjectName("listWidgetInv");
        listWidgetInv->setGeometry(QRect(180, 310, 601, 231));
        label_2 = new QLabel(ManagerWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 130, 91, 31));
        comboBoxItemType = new QComboBox(ManagerWindow);
        comboBoxItemType->addItem(QString());
        comboBoxItemType->addItem(QString());
        comboBoxItemType->setObjectName("comboBoxItemType");
        comboBoxItemType->setGeometry(QRect(150, 130, 101, 31));
        label_3 = new QLabel(ManagerWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 190, 63, 20));
        lineEditBrand = new QLineEdit(ManagerWindow);
        lineEditBrand->setObjectName("lineEditBrand");
        lineEditBrand->setGeometry(QRect(110, 190, 113, 26));
        label_4 = new QLabel(ManagerWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(250, 190, 71, 21));
        lineEditCategory = new QLineEdit(ManagerWindow);
        lineEditCategory->setObjectName("lineEditCategory");
        lineEditCategory->setGeometry(QRect(330, 190, 113, 26));
        lineEditsup = new QLineEdit(ManagerWindow);
        lineEditsup->setObjectName("lineEditsup");
        lineEditsup->setGeometry(QRect(340, 130, 113, 26));
        label_5 = new QLabel(ManagerWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(270, 130, 81, 21));
        checkBoxConsumable = new QCheckBox(ManagerWindow);
        checkBoxConsumable->setObjectName("checkBoxConsumable");
        checkBoxConsumable->setGeometry(QRect(500, 150, 131, 51));
        labelItemID = new QLabel(ManagerWindow);
        labelItemID->setObjectName("labelItemID");
        labelItemID->setGeometry(QRect(490, 130, 63, 20));
        lineEditItemID = new QLineEdit(ManagerWindow);
        lineEditItemID->setObjectName("lineEditItemID");
        lineEditItemID->setGeometry(QRect(560, 130, 113, 26));
        lineEditName = new QLineEdit(ManagerWindow);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setGeometry(QRect(150, 80, 113, 26));
        label_6 = new QLabel(ManagerWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 80, 63, 20));
        label_7 = new QLabel(ManagerWindow);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(280, 80, 101, 20));
        lineEditDesc = new QLineEdit(ManagerWindow);
        lineEditDesc->setObjectName("lineEditDesc");
        lineEditDesc->setGeometry(QRect(370, 80, 113, 26));
        spinBoxQuantity = new QSpinBox(ManagerWindow);
        spinBoxQuantity->setObjectName("spinBoxQuantity");
        spinBoxQuantity->setGeometry(QRect(580, 80, 61, 31));
        label_8 = new QLabel(ManagerWindow);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(490, 80, 63, 20));
        label_9 = new QLabel(ManagerWindow);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(670, 80, 63, 20));
        doubleSpinBoxPrice = new QDoubleSpinBox(ManagerWindow);
        doubleSpinBoxPrice->setObjectName("doubleSpinBoxPrice");
        doubleSpinBoxPrice->setGeometry(QRect(741, 75, 81, 31));
        pushButtonReport = new QPushButton(ManagerWindow);
        pushButtonReport->setObjectName("pushButtonReport");
        pushButtonReport->setGeometry(QRect(490, 250, 121, 31));

        retranslateUi(ManagerWindow);

        QMetaObject::connectSlotsByName(ManagerWindow);
    } // setupUi

    void retranslateUi(QDialog *ManagerWindow)
    {
        ManagerWindow->setWindowTitle(QCoreApplication::translate("ManagerWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ManagerWindow", "Welcome!", nullptr));
        pushButtonAdditem->setText(QCoreApplication::translate("ManagerWindow", "Add Item", nullptr));
        pushButtonViewinv->setText(QCoreApplication::translate("ManagerWindow", "View Inventory", nullptr));
        pushButtonlogout->setText(QCoreApplication::translate("ManagerWindow", "Logout", nullptr));
        label_2->setText(QCoreApplication::translate("ManagerWindow", "Item Type:", nullptr));
        comboBoxItemType->setItemText(0, QCoreApplication::translate("ManagerWindow", "Product", nullptr));
        comboBoxItemType->setItemText(1, QCoreApplication::translate("ManagerWindow", "Supply", nullptr));

        label_3->setText(QCoreApplication::translate("ManagerWindow", "Brand:", nullptr));
        label_4->setText(QCoreApplication::translate("ManagerWindow", "Category:", nullptr));
        label_5->setText(QCoreApplication::translate("ManagerWindow", "Supplier:", nullptr));
        checkBoxConsumable->setText(QCoreApplication::translate("ManagerWindow", "Consumable?", nullptr));
        labelItemID->setText(QCoreApplication::translate("ManagerWindow", "ItemID:", nullptr));
        label_6->setText(QCoreApplication::translate("ManagerWindow", "Name:", nullptr));
        label_7->setText(QCoreApplication::translate("ManagerWindow", "Description:", nullptr));
        label_8->setText(QCoreApplication::translate("ManagerWindow", "Quatity", nullptr));
        label_9->setText(QCoreApplication::translate("ManagerWindow", "Price:", nullptr));
        pushButtonReport->setText(QCoreApplication::translate("ManagerWindow", "Generate Report", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManagerWindow: public Ui_ManagerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERWINDOW_H
