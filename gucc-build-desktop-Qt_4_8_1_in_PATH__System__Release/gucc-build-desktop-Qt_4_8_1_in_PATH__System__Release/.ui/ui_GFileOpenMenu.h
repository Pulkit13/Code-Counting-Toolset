/********************************************************************************
** Form generated from reading UI file 'GFileOpenMenu.ui'
**
** Created: Tue Apr 16 17:18:32 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GFILEOPENMENU_H
#define UI_GFILEOPENMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GFileOpenMenuClass
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *txtFileLines;
    QDialogButtonBox *btnBox;

    void setupUi(QDialog *GFileOpenMenuClass)
    {
        if (GFileOpenMenuClass->objectName().isEmpty())
            GFileOpenMenuClass->setObjectName(QString::fromUtf8("GFileOpenMenuClass"));
        GFileOpenMenuClass->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/gucc.png"), QSize(), QIcon::Normal, QIcon::Off);
        GFileOpenMenuClass->setWindowIcon(icon);
        layoutWidget = new QWidget(GFileOpenMenuClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 781, 581));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        txtFileLines = new QTextEdit(layoutWidget);
        txtFileLines->setObjectName(QString::fromUtf8("txtFileLines"));

        verticalLayout->addWidget(txtFileLines);

        btnBox = new QDialogButtonBox(layoutWidget);
        btnBox->setObjectName(QString::fromUtf8("btnBox"));
        btnBox->setOrientation(Qt::Horizontal);
        btnBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(btnBox);


        retranslateUi(GFileOpenMenuClass);

        QMetaObject::connectSlotsByName(GFileOpenMenuClass);
    } // setupUi

    void retranslateUi(QDialog *GFileOpenMenuClass)
    {
        GFileOpenMenuClass->setWindowTitle(QApplication::translate("GFileOpenMenuClass", "Open File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GFileOpenMenuClass: public Ui_GFileOpenMenuClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GFILEOPENMENU_H
