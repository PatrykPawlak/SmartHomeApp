#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void MainWindow::on_smartHomeWizardButton_clicked(void)
{
	SmartHomeWizardDialog dialog(this);
	dialog.exec();
}
