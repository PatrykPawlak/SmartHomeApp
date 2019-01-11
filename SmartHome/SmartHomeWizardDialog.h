#pragma once

#include <QDialog>
#include "ui_SmartHomeWizardDialog.h"

class SmartHomeWizardDialog : public QDialog
{
	Q_OBJECT

public:
	SmartHomeWizardDialog(QWidget *parent = Q_NULLPTR);
	~SmartHomeWizardDialog();

private:
	Ui::SmartHomeWizardDialog ui;
};
