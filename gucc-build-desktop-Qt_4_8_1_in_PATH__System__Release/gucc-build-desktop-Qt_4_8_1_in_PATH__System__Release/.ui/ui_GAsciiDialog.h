/********************************************************************************
** Form generated from reading UI file 'GAsciiDialog.ui'
**
** Created: Tue Apr 16 17:18:32 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GASCIIDIALOG_H
#define UI_GASCIIDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GAsciiDialogClass
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *cboResultsSelect;
    QTextEdit *txtResults;
    QPushButton *OKbtn;

    void setupUi(QDialog *GAsciiDialogClass)
    {
        if (GAsciiDialogClass->objectName().isEmpty())
            GAsciiDialogClass->setObjectName(QString::fromUtf8("GAsciiDialogClass"));
        GAsciiDialogClass->resize(939, 584);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/gucc.png"), QSize(), QIcon::Normal, QIcon::Off);
        GAsciiDialogClass->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(GAsciiDialogClass);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cboResultsSelect = new QComboBox(GAsciiDialogClass);
        cboResultsSelect->setObjectName(QString::fromUtf8("cboResultsSelect"));

        verticalLayout->addWidget(cboResultsSelect);

        txtResults = new QTextEdit(GAsciiDialogClass);
        txtResults->setObjectName(QString::fromUtf8("txtResults"));

        verticalLayout->addWidget(txtResults);

        OKbtn = new QPushButton(GAsciiDialogClass);
        OKbtn->setObjectName(QString::fromUtf8("OKbtn"));

        verticalLayout->addWidget(OKbtn, 0, Qt::AlignHCenter);


        retranslateUi(GAsciiDialogClass);
        QObject::connect(OKbtn, SIGNAL(clicked()), GAsciiDialogClass, SLOT(closeWindow()));

        QMetaObject::connectSlotsByName(GAsciiDialogClass);
    } // setupUi

    void retranslateUi(QDialog *GAsciiDialogClass)
    {
        GAsciiDialogClass->setWindowTitle(QApplication::translate("GAsciiDialogClass", "UCC Results", 0, QApplication::UnicodeUTF8));
        OKbtn->setText(QApplication::translate("GAsciiDialogClass", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GAsciiDialogClass: public Ui_GAsciiDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GASCIIDIALOG_H
