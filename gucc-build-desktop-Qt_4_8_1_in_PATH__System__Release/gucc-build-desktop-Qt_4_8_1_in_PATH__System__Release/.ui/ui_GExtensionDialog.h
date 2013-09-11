/********************************************************************************
** Form generated from reading UI file 'GExtensionDialog.ui'
**
** Created: Tue Apr 16 17:18:32 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEXTENSIONDIALOG_H
#define UI_GEXTENSIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GExtensionDialogClass
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QLineEdit *txtAddExt;
    QLabel *lblAddExt;
    QListWidget *lwExtensions;
    QGroupBox *groupBox2;
    QDialogButtonBox *btnBox;
    QPushButton *btnDelete;
    QPushButton *btnAdd;
    QPushButton *btnFileExt;

    void setupUi(QDialog *GExtensionDialogClass)
    {
        if (GExtensionDialogClass->objectName().isEmpty())
            GExtensionDialogClass->setObjectName(QString::fromUtf8("GExtensionDialogClass"));
        GExtensionDialogClass->resize(503, 329);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/gucc.png"), QSize(), QIcon::Normal, QIcon::Off);
        GExtensionDialogClass->setWindowIcon(icon);
        gridLayout = new QGridLayout(GExtensionDialogClass);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(GExtensionDialogClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        txtAddExt = new QLineEdit(groupBox);
        txtAddExt->setObjectName(QString::fromUtf8("txtAddExt"));
        txtAddExt->setGeometry(QRect(10, 40, 131, 20));
        lblAddExt = new QLabel(groupBox);
        lblAddExt->setObjectName(QString::fromUtf8("lblAddExt"));
        lblAddExt->setGeometry(QRect(10, 10, 201, 31));
        lwExtensions = new QListWidget(groupBox);
        lwExtensions->setObjectName(QString::fromUtf8("lwExtensions"));
        lwExtensions->setGeometry(QRect(10, 70, 281, 221));
        groupBox2 = new QGroupBox(groupBox);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        groupBox2->setGeometry(QRect(330, 0, 160, 311));
        btnBox = new QDialogButtonBox(groupBox2);
        btnBox->setObjectName(QString::fromUtf8("btnBox"));
        btnBox->setGeometry(QRect(10, 20, 75, 69));
        btnBox->setOrientation(Qt::Vertical);
        btnBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        btnDelete = new QPushButton(groupBox2);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setGeometry(QRect(10, 110, 75, 23));
        btnAdd = new QPushButton(groupBox2);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setGeometry(QRect(10, 80, 75, 23));
        btnFileExt = new QPushButton(groupBox2);
        btnFileExt->setObjectName(QString::fromUtf8("btnFileExt"));
        btnFileExt->setGeometry(QRect(10, 150, 91, 23));

        gridLayout->addWidget(groupBox, 0, 0, 2, 2);


        retranslateUi(GExtensionDialogClass);

        QMetaObject::connectSlotsByName(GExtensionDialogClass);
    } // setupUi

    void retranslateUi(QDialog *GExtensionDialogClass)
    {
        GExtensionDialogClass->setWindowTitle(QApplication::translate("GExtensionDialogClass", "Language File Extensions", 0, QApplication::UnicodeUTF8));
        lblAddExt->setText(QApplication::translate("GExtensionDialogClass", "Add Extension e.g Java=.java,.javax", 0, QApplication::UnicodeUTF8));
        btnDelete->setText(QApplication::translate("GExtensionDialogClass", "Delete", 0, QApplication::UnicodeUTF8));
        btnAdd->setText(QApplication::translate("GExtensionDialogClass", "Add", 0, QApplication::UnicodeUTF8));
        btnFileExt->setText(QApplication::translate("GExtensionDialogClass", "File Extensions", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GExtensionDialogClass: public Ui_GExtensionDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEXTENSIONDIALOG_H
