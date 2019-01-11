/********************************************************************************
** Form generated from reading UI file 'SmartHomeWizardDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTHOMEWIZARDDIALOG_H
#define UI_SMARTHOMEWIZARDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>

QT_BEGIN_NAMESPACE

class Ui_SmartHomeWizardDialog
{
public:
    QGridLayout *gridLayout;

    void setupUi(QDialog *SmartHomeWizardDialog)
    {
        if (SmartHomeWizardDialog->objectName().isEmpty())
            SmartHomeWizardDialog->setObjectName(QString::fromUtf8("SmartHomeWizardDialog"));
        SmartHomeWizardDialog->resize(800, 600);
        SmartHomeWizardDialog->setMinimumSize(QSize(800, 600));
        gridLayout = new QGridLayout(SmartHomeWizardDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        retranslateUi(SmartHomeWizardDialog);

        QMetaObject::connectSlotsByName(SmartHomeWizardDialog);
    } // setupUi

    void retranslateUi(QDialog *SmartHomeWizardDialog)
    {
        SmartHomeWizardDialog->setWindowTitle(QApplication::translate("SmartHomeWizardDialog", "SmartHomeWizardDialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmartHomeWizardDialog: public Ui_SmartHomeWizardDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTHOMEWIZARDDIALOG_H
