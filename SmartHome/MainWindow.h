#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include "SmartHomeWizardDialog.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);

private:
	Ui::MainWindowClass ui;

private slots:
	void on_smartHomeWizardButton_clicked(void);
};
