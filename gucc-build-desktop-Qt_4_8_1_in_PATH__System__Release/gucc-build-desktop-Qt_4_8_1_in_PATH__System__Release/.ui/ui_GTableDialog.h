/********************************************************************************
** Form generated from reading UI file 'GTableDialog.ui'
**
** Created: Tue Apr 16 17:18:32 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GTABLEDIALOG_H
#define UI_GTABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GTableDialogClass
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *cboResultsSelect;
    QTableWidget *tblResults;
    QPushButton *Okbutton;

    void setupUi(QDialog *GTableDialogClass)
    {
        if (GTableDialogClass->objectName().isEmpty())
            GTableDialogClass->setObjectName(QString::fromUtf8("GTableDialogClass"));
        GTableDialogClass->resize(851, 636);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/gucc.png"), QSize(), QIcon::Normal, QIcon::Off);
        GTableDialogClass->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(GTableDialogClass);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cboResultsSelect = new QComboBox(GTableDialogClass);
        cboResultsSelect->setObjectName(QString::fromUtf8("cboResultsSelect"));

        verticalLayout->addWidget(cboResultsSelect);

        tblResults = new QTableWidget(GTableDialogClass);
        tblResults->setObjectName(QString::fromUtf8("tblResults"));

        verticalLayout->addWidget(tblResults);

        Okbutton = new QPushButton(GTableDialogClass);
        Okbutton->setObjectName(QString::fromUtf8("Okbutton"));

        verticalLayout->addWidget(Okbutton, 0, Qt::AlignHCenter);


        retranslateUi(GTableDialogClass);
        QObject::connect(Okbutton, SIGNAL(clicked()), GTableDialogClass, SLOT(closeWin()));

        QMetaObject::connectSlotsByName(GTableDialogClass);
    } // setupUi

    void retranslateUi(QDialog *GTableDialogClass)
    {
        GTableDialogClass->setWindowTitle(QApplication::translate("GTableDialogClass", "UCC Results", 0, QApplication::UnicodeUTF8));
        Okbutton->setText(QApplication::translate("GTableDialogClass", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GTableDialogClass: public Ui_GTableDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GTABLEDIALOG_H
