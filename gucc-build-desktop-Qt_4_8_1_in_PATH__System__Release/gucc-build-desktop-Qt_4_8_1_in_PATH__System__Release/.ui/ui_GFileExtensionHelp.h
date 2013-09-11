/********************************************************************************
** Form generated from reading UI file 'GFileExtensionHelp.ui'
**
** Created: Tue Apr 16 17:18:32 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GFILEEXTENSIONHELP_H
#define UI_GFILEEXTENSIONHELP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_GFileExtensionHelpClass
{
public:
    QDialogButtonBox *btnBox;
    QTextBrowser *txtHelp;

    void setupUi(QDialog *GFileExtensionHelpClass)
    {
        if (GFileExtensionHelpClass->objectName().isEmpty())
            GFileExtensionHelpClass->setObjectName(QString::fromUtf8("GFileExtensionHelpClass"));
        GFileExtensionHelpClass->resize(543, 439);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/gucc.png"), QSize(), QIcon::Normal, QIcon::Off);
        GFileExtensionHelpClass->setWindowIcon(icon);
        btnBox = new QDialogButtonBox(GFileExtensionHelpClass);
        btnBox->setObjectName(QString::fromUtf8("btnBox"));
        btnBox->setGeometry(QRect(220, 370, 81, 32));
        btnBox->setOrientation(Qt::Horizontal);
        btnBox->setStandardButtons(QDialogButtonBox::Ok);
        txtHelp = new QTextBrowser(GFileExtensionHelpClass);
        txtHelp->setObjectName(QString::fromUtf8("txtHelp"));
        txtHelp->setGeometry(QRect(10, 10, 511, 331));

        retranslateUi(GFileExtensionHelpClass);

        QMetaObject::connectSlotsByName(GFileExtensionHelpClass);
    } // setupUi

    void retranslateUi(QDialog *GFileExtensionHelpClass)
    {
        GFileExtensionHelpClass->setWindowTitle(QApplication::translate("GFileExtensionHelpClass", "File Extension Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GFileExtensionHelpClass: public Ui_GFileExtensionHelpClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GFILEEXTENSIONHELP_H
