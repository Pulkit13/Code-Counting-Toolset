/********************************************************************************
** Form generated from reading UI file 'GMainWindow.ui'
**
** Created: Tue Apr 16 17:18:32 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GMAINWINDOW_H
#define UI_GMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GMainWindowClass
{
public:
    QAction *actionFile_Open;
    QAction *actionExit;
    QAction *actionExtensions;
    QAction *actionUser_Manual;
    QAction *actionAbout;
    QAction *actionEdit_Extensions;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout;
    QLabel *lblFilesA;
    QListWidget *lwFileListA;
    QListWidget *lwExtensionListA;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnAddFileA;
    QLabel *lblAddFileA;
    QPushButton *btnRemoveFileA;
    QLabel *lblRemoveFileA;
    QPushButton *btnAddFolderA;
    QLabel *lblAddFolderA;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout_2;
    QLabel *lblFilesB;
    QListWidget *lwFileListB;
    QListWidget *lwExtensionListB;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnAddFileB;
    QLabel *lblAddFileB;
    QPushButton *btnRemoveFileB;
    QLabel *lblRemoveFileB;
    QPushButton *btnAddFolderB;
    QLabel *lblAddFolderB;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *grpbArguments;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chkDifferencing;
    QCheckBox *chkAsciiOut;
    QCheckBox *chkNoComplex;
    QCheckBox *chkNoDup;
    QCheckBox *chkLegacyOut;
    QCheckBox *chkModThreshold;
    QLineEdit *txtModThreshold;
    QCheckBox *chkDupThreshold;
    QLineEdit *txtDupThreshold;
    QCheckBox *chkTruncThreshold;
    QLineEdit *txtTruncThreshold;
    QCheckBox *chkExtensionFile;
    QPushButton *btnCount;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblLog;
    QTextEdit *txtLog;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QMenu *menuAbout;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GMainWindowClass)
    {
        if (GMainWindowClass->objectName().isEmpty())
            GMainWindowClass->setObjectName(QString::fromUtf8("GMainWindowClass"));
        GMainWindowClass->resize(976, 557);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/gucc.png"), QSize(), QIcon::Normal, QIcon::Off);
        GMainWindowClass->setWindowIcon(icon);
        actionFile_Open = new QAction(GMainWindowClass);
        actionFile_Open->setObjectName(QString::fromUtf8("actionFile_Open"));
        actionExit = new QAction(GMainWindowClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExtensions = new QAction(GMainWindowClass);
        actionExtensions->setObjectName(QString::fromUtf8("actionExtensions"));
        actionUser_Manual = new QAction(GMainWindowClass);
        actionUser_Manual->setObjectName(QString::fromUtf8("actionUser_Manual"));
        actionAbout = new QAction(GMainWindowClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionEdit_Extensions = new QAction(GMainWindowClass);
        actionEdit_Extensions->setObjectName(QString::fromUtf8("actionEdit_Extensions"));
        centralwidget = new QWidget(GMainWindowClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lblFilesA = new QLabel(centralwidget);
        lblFilesA->setObjectName(QString::fromUtf8("lblFilesA"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lblFilesA);

        lwFileListA = new QListWidget(centralwidget);
        lwFileListA->setObjectName(QString::fromUtf8("lwFileListA"));
        lwFileListA->setSelectionMode(QAbstractItemView::MultiSelection);

        formLayout->setWidget(1, QFormLayout::LabelRole, lwFileListA);

        lwExtensionListA = new QListWidget(centralwidget);
        lwExtensionListA->setObjectName(QString::fromUtf8("lwExtensionListA"));
        lwExtensionListA->setSelectionMode(QAbstractItemView::ExtendedSelection);

        formLayout->setWidget(1, QFormLayout::FieldRole, lwExtensionListA);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        btnAddFileA = new QPushButton(centralwidget);
        btnAddFileA->setObjectName(QString::fromUtf8("btnAddFileA"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/plus_sign.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddFileA->setIcon(icon1);
        btnAddFileA->setIconSize(QSize(22, 22));

        horizontalLayout_6->addWidget(btnAddFileA);

        lblAddFileA = new QLabel(centralwidget);
        lblAddFileA->setObjectName(QString::fromUtf8("lblAddFileA"));

        horizontalLayout_6->addWidget(lblAddFileA);

        btnRemoveFileA = new QPushButton(centralwidget);
        btnRemoveFileA->setObjectName(QString::fromUtf8("btnRemoveFileA"));
        btnRemoveFileA->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/minus_sign.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveFileA->setIcon(icon2);
        btnRemoveFileA->setIconSize(QSize(22, 22));

        horizontalLayout_6->addWidget(btnRemoveFileA);

        lblRemoveFileA = new QLabel(centralwidget);
        lblRemoveFileA->setObjectName(QString::fromUtf8("lblRemoveFileA"));

        horizontalLayout_6->addWidget(lblRemoveFileA);

        btnAddFolderA = new QPushButton(centralwidget);
        btnAddFolderA->setObjectName(QString::fromUtf8("btnAddFolderA"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/add_folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddFolderA->setIcon(icon3);
        btnAddFolderA->setIconSize(QSize(22, 22));

        horizontalLayout_6->addWidget(btnAddFolderA);

        lblAddFolderA = new QLabel(centralwidget);
        lblAddFolderA->setObjectName(QString::fromUtf8("lblAddFolderA"));

        horizontalLayout_6->addWidget(lblAddFolderA);


        formLayout->setLayout(2, QFormLayout::SpanningRole, horizontalLayout_6);


        horizontalLayout_4->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        lblFilesB = new QLabel(centralwidget);
        lblFilesB->setObjectName(QString::fromUtf8("lblFilesB"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, lblFilesB);

        lwFileListB = new QListWidget(centralwidget);
        lwFileListB->setObjectName(QString::fromUtf8("lwFileListB"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, lwFileListB);

        lwExtensionListB = new QListWidget(centralwidget);
        lwExtensionListB->setObjectName(QString::fromUtf8("lwExtensionListB"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lwExtensionListB);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnAddFileB = new QPushButton(centralwidget);
        btnAddFileB->setObjectName(QString::fromUtf8("btnAddFileB"));
        btnAddFileB->setIcon(icon1);
        btnAddFileB->setIconSize(QSize(22, 22));

        horizontalLayout_2->addWidget(btnAddFileB);

        lblAddFileB = new QLabel(centralwidget);
        lblAddFileB->setObjectName(QString::fromUtf8("lblAddFileB"));

        horizontalLayout_2->addWidget(lblAddFileB);

        btnRemoveFileB = new QPushButton(centralwidget);
        btnRemoveFileB->setObjectName(QString::fromUtf8("btnRemoveFileB"));
        btnRemoveFileB->setEnabled(true);
        btnRemoveFileB->setIcon(icon2);
        btnRemoveFileB->setIconSize(QSize(22, 22));

        horizontalLayout_2->addWidget(btnRemoveFileB);

        lblRemoveFileB = new QLabel(centralwidget);
        lblRemoveFileB->setObjectName(QString::fromUtf8("lblRemoveFileB"));

        horizontalLayout_2->addWidget(lblRemoveFileB);

        btnAddFolderB = new QPushButton(centralwidget);
        btnAddFolderB->setObjectName(QString::fromUtf8("btnAddFolderB"));
        btnAddFolderB->setIcon(icon3);
        btnAddFolderB->setIconSize(QSize(22, 22));

        horizontalLayout_2->addWidget(btnAddFolderB);

        lblAddFolderB = new QLabel(centralwidget);
        lblAddFolderB->setObjectName(QString::fromUtf8("lblAddFolderB"));

        horizontalLayout_2->addWidget(lblAddFolderB);


        formLayout_2->setLayout(2, QFormLayout::SpanningRole, horizontalLayout_2);


        horizontalLayout_4->addLayout(formLayout_2);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        grpbArguments = new QGroupBox(centralwidget);
        grpbArguments->setObjectName(QString::fromUtf8("grpbArguments"));
        horizontalLayout = new QHBoxLayout(grpbArguments);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        chkDifferencing = new QCheckBox(grpbArguments);
        chkDifferencing->setObjectName(QString::fromUtf8("chkDifferencing"));

        horizontalLayout->addWidget(chkDifferencing);

        chkAsciiOut = new QCheckBox(grpbArguments);
        chkAsciiOut->setObjectName(QString::fromUtf8("chkAsciiOut"));

        horizontalLayout->addWidget(chkAsciiOut);

        chkNoComplex = new QCheckBox(grpbArguments);
        chkNoComplex->setObjectName(QString::fromUtf8("chkNoComplex"));

        horizontalLayout->addWidget(chkNoComplex);

        chkNoDup = new QCheckBox(grpbArguments);
        chkNoDup->setObjectName(QString::fromUtf8("chkNoDup"));

        horizontalLayout->addWidget(chkNoDup);

        chkLegacyOut = new QCheckBox(grpbArguments);
        chkLegacyOut->setObjectName(QString::fromUtf8("chkLegacyOut"));

        horizontalLayout->addWidget(chkLegacyOut);

        chkModThreshold = new QCheckBox(grpbArguments);
        chkModThreshold->setObjectName(QString::fromUtf8("chkModThreshold"));
        chkModThreshold->setEnabled(false);

        horizontalLayout->addWidget(chkModThreshold);

        txtModThreshold = new QLineEdit(grpbArguments);
        txtModThreshold->setObjectName(QString::fromUtf8("txtModThreshold"));
        txtModThreshold->setEnabled(false);

        horizontalLayout->addWidget(txtModThreshold);

        chkDupThreshold = new QCheckBox(grpbArguments);
        chkDupThreshold->setObjectName(QString::fromUtf8("chkDupThreshold"));

        horizontalLayout->addWidget(chkDupThreshold);

        txtDupThreshold = new QLineEdit(grpbArguments);
        txtDupThreshold->setObjectName(QString::fromUtf8("txtDupThreshold"));
        txtDupThreshold->setEnabled(false);

        horizontalLayout->addWidget(txtDupThreshold);

        chkTruncThreshold = new QCheckBox(grpbArguments);
        chkTruncThreshold->setObjectName(QString::fromUtf8("chkTruncThreshold"));

        horizontalLayout->addWidget(chkTruncThreshold);

        txtTruncThreshold = new QLineEdit(grpbArguments);
        txtTruncThreshold->setObjectName(QString::fromUtf8("txtTruncThreshold"));
        txtTruncThreshold->setEnabled(false);

        horizontalLayout->addWidget(txtTruncThreshold);

        chkExtensionFile = new QCheckBox(grpbArguments);
        chkExtensionFile->setObjectName(QString::fromUtf8("chkExtensionFile"));

        horizontalLayout->addWidget(chkExtensionFile);

        btnCount = new QPushButton(grpbArguments);
        btnCount->setObjectName(QString::fromUtf8("btnCount"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCount->setIcon(icon4);
        btnCount->setIconSize(QSize(60, 60));

        horizontalLayout->addWidget(btnCount);


        verticalLayout->addWidget(grpbArguments);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lblLog = new QLabel(centralwidget);
        lblLog->setObjectName(QString::fromUtf8("lblLog"));

        horizontalLayout_3->addWidget(lblLog);

        txtLog = new QTextEdit(centralwidget);
        txtLog->setObjectName(QString::fromUtf8("txtLog"));
        txtLog->setEnabled(false);

        horizontalLayout_3->addWidget(txtLog);


        verticalLayout->addLayout(horizontalLayout_3);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);

        GMainWindowClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GMainWindowClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 976, 25));
        menubar->setProperty("windowicon", QVariant(icon));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        GMainWindowClass->setMenuBar(menubar);
        statusbar = new QStatusBar(GMainWindowClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GMainWindowClass->setStatusBar(statusbar);

        menubar->addAction(menuAbout->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuAbout->addAction(actionFile_Open);
        menuAbout->addSeparator();
        menuAbout->addAction(actionExtensions);
        menuAbout->addAction(actionEdit_Extensions);
        menuAbout->addSeparator();
        menuAbout->addAction(actionExit);
        menuHelp->addAction(actionUser_Manual);
        menuHelp->addAction(actionAbout);

        retranslateUi(GMainWindowClass);

        QMetaObject::connectSlotsByName(GMainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *GMainWindowClass)
    {
        GMainWindowClass->setWindowTitle(QApplication::translate("GMainWindowClass", "Unified Code Counter (UCC)", 0, QApplication::UnicodeUTF8));
        actionFile_Open->setText(QApplication::translate("GMainWindowClass", "File Open", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("GMainWindowClass", "Exit", 0, QApplication::UnicodeUTF8));
        actionExtensions->setText(QApplication::translate("GMainWindowClass", "View Extensions", 0, QApplication::UnicodeUTF8));
        actionUser_Manual->setText(QApplication::translate("GMainWindowClass", "User Manual", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("GMainWindowClass", "About", 0, QApplication::UnicodeUTF8));
        actionEdit_Extensions->setText(QApplication::translate("GMainWindowClass", "Edit Extensions", 0, QApplication::UnicodeUTF8));
        lblFilesA->setText(QApplication::translate("GMainWindowClass", "Files To Count:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnAddFileA->setToolTip(QApplication::translate("GMainWindowClass", "Add File", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnAddFileA->setText(QString());
        lblAddFileA->setText(QApplication::translate("GMainWindowClass", "Add File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnRemoveFileA->setToolTip(QApplication::translate("GMainWindowClass", "Remove File", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnRemoveFileA->setText(QString());
        lblRemoveFileA->setText(QApplication::translate("GMainWindowClass", "Remove File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnAddFolderA->setToolTip(QApplication::translate("GMainWindowClass", "Add Folder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnAddFolderA->setText(QString());
        lblAddFolderA->setText(QApplication::translate("GMainWindowClass", "Add Folder", 0, QApplication::UnicodeUTF8));
        lblFilesB->setText(QApplication::translate("GMainWindowClass", "File Set B to Differentiate:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnAddFileB->setToolTip(QApplication::translate("GMainWindowClass", "Add File", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnAddFileB->setText(QString());
        lblAddFileB->setText(QApplication::translate("GMainWindowClass", "Add File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnRemoveFileB->setToolTip(QApplication::translate("GMainWindowClass", "Remove File", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnRemoveFileB->setText(QString());
        lblRemoveFileB->setText(QApplication::translate("GMainWindowClass", "Remove File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnAddFolderB->setToolTip(QApplication::translate("GMainWindowClass", "Add Folder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnAddFolderB->setText(QString());
        lblAddFolderB->setText(QApplication::translate("GMainWindowClass", "Add Folder", 0, QApplication::UnicodeUTF8));
        grpbArguments->setTitle(QApplication::translate("GMainWindowClass", "Command Line Arguments", 0, QApplication::UnicodeUTF8));
        chkDifferencing->setText(QApplication::translate("GMainWindowClass", "Differencing", 0, QApplication::UnicodeUTF8));
        chkAsciiOut->setText(QApplication::translate("GMainWindowClass", "-ascii", 0, QApplication::UnicodeUTF8));
        chkNoComplex->setText(QApplication::translate("GMainWindowClass", "-nocomplex", 0, QApplication::UnicodeUTF8));
        chkNoDup->setText(QApplication::translate("GMainWindowClass", "-nodup", 0, QApplication::UnicodeUTF8));
        chkLegacyOut->setText(QApplication::translate("GMainWindowClass", "-legacy", 0, QApplication::UnicodeUTF8));
        chkModThreshold->setText(QApplication::translate("GMainWindowClass", "-t#", 0, QApplication::UnicodeUTF8));
        txtModThreshold->setText(QApplication::translate("GMainWindowClass", "60", 0, QApplication::UnicodeUTF8));
        chkDupThreshold->setText(QApplication::translate("GMainWindowClass", "-tdup #", 0, QApplication::UnicodeUTF8));
        txtDupThreshold->setText(QApplication::translate("GMainWindowClass", "0", 0, QApplication::UnicodeUTF8));
        chkTruncThreshold->setText(QApplication::translate("GMainWindowClass", "-trunc #", 0, QApplication::UnicodeUTF8));
        txtTruncThreshold->setText(QApplication::translate("GMainWindowClass", "10000", 0, QApplication::UnicodeUTF8));
        chkExtensionFile->setText(QApplication::translate("GMainWindowClass", "extFile", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnCount->setToolTip(QApplication::translate("GMainWindowClass", "Run Code Count", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnCount->setText(QString());
        lblLog->setText(QApplication::translate("GMainWindowClass", "Log:", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("GMainWindowClass", "File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("GMainWindowClass", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GMainWindowClass: public Ui_GMainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GMAINWINDOW_H
