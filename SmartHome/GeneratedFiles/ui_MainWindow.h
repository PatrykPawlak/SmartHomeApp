/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *centralWidgetLayout;
    QStackedWidget *mainStackedWidget;
    QWidget *zeroPage;
    QGridLayout *zeroPageLayout;
    QLabel *smartHomeWizardPhoto;
    QFrame *zeroPageRightFrame;
    QVBoxLayout *zeroPageRightFrameLayout;
    QLabel *smartHomeWizardLabel;
    QPushButton *smartHomeWizardButton;
    QWidget *firstPage;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->setWindowModality(Qt::ApplicationModal);
        MainWindowClass->setEnabled(true);
        MainWindowClass->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowClass->sizePolicy().hasHeightForWidth());
        MainWindowClass->setSizePolicy(sizePolicy);
        MainWindowClass->setMinimumSize(QSize(800, 600));
        MainWindowClass->setMaximumSize(QSize(800, 600));
        MainWindowClass->setSizeIncrement(QSize(0, 0));
        MainWindowClass->setBaseSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        MainWindowClass->setFont(font);
        MainWindowClass->setWindowOpacity(1.000000000000000);
        MainWindowClass->setAutoFillBackground(false);
        MainWindowClass->setIconSize(QSize(32, 32));
        MainWindowClass->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindowClass->setDocumentMode(false);
        MainWindowClass->setTabShape(QTabWidget::Rounded);
        MainWindowClass->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidgetLayout = new QVBoxLayout(centralWidget);
        centralWidgetLayout->setSpacing(6);
        centralWidgetLayout->setContentsMargins(11, 11, 11, 11);
        centralWidgetLayout->setObjectName(QString::fromUtf8("centralWidgetLayout"));
        mainStackedWidget = new QStackedWidget(centralWidget);
        mainStackedWidget->setObjectName(QString::fromUtf8("mainStackedWidget"));
        zeroPage = new QWidget();
        zeroPage->setObjectName(QString::fromUtf8("zeroPage"));
        zeroPageLayout = new QGridLayout(zeroPage);
        zeroPageLayout->setSpacing(6);
        zeroPageLayout->setContentsMargins(11, 11, 11, 11);
        zeroPageLayout->setObjectName(QString::fromUtf8("zeroPageLayout"));
        zeroPageLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        smartHomeWizardPhoto = new QLabel(zeroPage);
        smartHomeWizardPhoto->setObjectName(QString::fromUtf8("smartHomeWizardPhoto"));
        sizePolicy.setHeightForWidth(smartHomeWizardPhoto->sizePolicy().hasHeightForWidth());
        smartHomeWizardPhoto->setSizePolicy(sizePolicy);
        smartHomeWizardPhoto->setMinimumSize(QSize(400, 400));
        smartHomeWizardPhoto->setMaximumSize(QSize(400, 400));
        smartHomeWizardPhoto->setSizeIncrement(QSize(0, 0));
        smartHomeWizardPhoto->setBaseSize(QSize(0, 0));
        smartHomeWizardPhoto->setFrameShape(QFrame::NoFrame);
        smartHomeWizardPhoto->setFrameShadow(QFrame::Plain);
        smartHomeWizardPhoto->setTextFormat(Qt::AutoText);
        smartHomeWizardPhoto->setPixmap(QPixmap(QString::fromUtf8(":/images/Resources/images/smartHomeWizard.png")));
        smartHomeWizardPhoto->setScaledContents(true);
        smartHomeWizardPhoto->setAlignment(Qt::AlignCenter);
        smartHomeWizardPhoto->setWordWrap(false);
        smartHomeWizardPhoto->setMargin(0);
        smartHomeWizardPhoto->setIndent(-1);
        smartHomeWizardPhoto->setOpenExternalLinks(false);

        zeroPageLayout->addWidget(smartHomeWizardPhoto, 0, 1, 1, 1);

        zeroPageRightFrame = new QFrame(zeroPage);
        zeroPageRightFrame->setObjectName(QString::fromUtf8("zeroPageRightFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(zeroPageRightFrame->sizePolicy().hasHeightForWidth());
        zeroPageRightFrame->setSizePolicy(sizePolicy1);
        zeroPageRightFrame->setMinimumSize(QSize(0, 340));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        font1.setStyleStrategy(QFont::PreferAntialias);
        zeroPageRightFrame->setFont(font1);
        zeroPageRightFrame->setAcceptDrops(false);
        zeroPageRightFrame->setAutoFillBackground(false);
        zeroPageRightFrame->setFrameShape(QFrame::NoFrame);
        zeroPageRightFrame->setFrameShadow(QFrame::Sunken);
        zeroPageRightFrameLayout = new QVBoxLayout(zeroPageRightFrame);
        zeroPageRightFrameLayout->setSpacing(6);
        zeroPageRightFrameLayout->setContentsMargins(11, 11, 11, 11);
        zeroPageRightFrameLayout->setObjectName(QString::fromUtf8("zeroPageRightFrameLayout"));
        zeroPageRightFrameLayout->setContentsMargins(9, -1, -1, -1);
        smartHomeWizardLabel = new QLabel(zeroPageRightFrame);
        smartHomeWizardLabel->setObjectName(QString::fromUtf8("smartHomeWizardLabel"));
        smartHomeWizardLabel->setStyleSheet(QString::fromUtf8("color: rgb(51, 51, 51);"));
        smartHomeWizardLabel->setWordWrap(true);

        zeroPageRightFrameLayout->addWidget(smartHomeWizardLabel);

        smartHomeWizardButton = new QPushButton(zeroPageRightFrame);
        smartHomeWizardButton->setObjectName(QString::fromUtf8("smartHomeWizardButton"));
        smartHomeWizardButton->setMinimumSize(QSize(0, 40));
        smartHomeWizardButton->setCursor(QCursor(Qt::PointingHandCursor));
        smartHomeWizardButton->setAcceptDrops(false);
        smartHomeWizardButton->setAutoFillBackground(true);
        smartHomeWizardButton->setStyleSheet(QString::fromUtf8("color: rgb(51, 51, 51);"));
        smartHomeWizardButton->setInputMethodHints(Qt::ImhNone);
        smartHomeWizardButton->setCheckable(false);
        smartHomeWizardButton->setAutoDefault(false);
        smartHomeWizardButton->setFlat(false);

        zeroPageRightFrameLayout->addWidget(smartHomeWizardButton);


        zeroPageLayout->addWidget(zeroPageRightFrame, 0, 2, 1, 1);

        mainStackedWidget->addWidget(zeroPage);
        firstPage = new QWidget();
        firstPage->setObjectName(QString::fromUtf8("firstPage"));
        firstPage->setMaximumSize(QSize(782, 562));
        tabWidget = new QTabWidget(firstPage);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 40, 127, 80));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        mainStackedWidget->addWidget(firstPage);

        centralWidgetLayout->addWidget(mainStackedWidget);

        MainWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setSizeGripEnabled(true);
        MainWindowClass->setStatusBar(statusBar);

        retranslateUi(MainWindowClass);

        mainStackedWidget->setCurrentIndex(0);
        smartHomeWizardButton->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "Smart Dom", nullptr));
        smartHomeWizardPhoto->setText(QString());
        smartHomeWizardLabel->setText(QApplication::translate("MainWindowClass", "<html><head/><body><p><span style=\" font-size:18pt;\">Witaj w aplikacji Smart Dom.</span></p><p><span style=\" font-size:12pt;\">Aby przej\305\233\304\207 do zarz\304\205dzania domem musisz go najpierw skonfigurowa\304\207.</span></p><p><span style=\" font-size:12pt;\">Zr\303\263b to klikaj\304\205c poni\305\274szy przycisk.</span></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        smartHomeWizardButton->setToolTip(QApplication::translate("MainWindowClass", "Stw\303\263rz nowy Smart Dom", nullptr));
#endif // QT_NO_TOOLTIP
        smartHomeWizardButton->setText(QApplication::translate("MainWindowClass", "Stw\303\263rz", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindowClass", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindowClass", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
