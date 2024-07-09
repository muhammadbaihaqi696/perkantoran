/********************************************************************************
** Form generated from reading UI file 'formsuratmasuk.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSURATMASUK_H
#define UI_FORMSURATMASUK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formSuratMasuk
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *noSuratMasukLabel;
    QLineEdit *noSuratMasukLineEdit;
    QLabel *noAgendaLabel;
    QLineEdit *noAgendaLineEdit;
    QLabel *tglSuratLabel;
    QDateEdit *tglSuratDateEdit;
    QLabel *tglTerimaLabel;
    QDateEdit *tglTerimaDateEdit;
    QLabel *asalSuratLabel;
    QLineEdit *asalSuratLineEdit;
    QLabel *tujuanLabel;
    QLineEdit *tujuanLineEdit;
    QLabel *perihalLabel;
    QLineEdit *perihalLineEdit;
    QLabel *sifatSuratLabel;
    QLineEdit *sifatSuratLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTableView *tableSrtMsk;

    void setupUi(QWidget *formSuratMasuk)
    {
        if (formSuratMasuk->objectName().isEmpty())
            formSuratMasuk->setObjectName("formSuratMasuk");
        formSuratMasuk->resize(707, 630);
        formLayoutWidget = new QWidget(formSuratMasuk);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(90, 40, 521, 271));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        noSuratMasukLabel = new QLabel(formLayoutWidget);
        noSuratMasukLabel->setObjectName("noSuratMasukLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, noSuratMasukLabel);

        noSuratMasukLineEdit = new QLineEdit(formLayoutWidget);
        noSuratMasukLineEdit->setObjectName("noSuratMasukLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, noSuratMasukLineEdit);

        noAgendaLabel = new QLabel(formLayoutWidget);
        noAgendaLabel->setObjectName("noAgendaLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, noAgendaLabel);

        noAgendaLineEdit = new QLineEdit(formLayoutWidget);
        noAgendaLineEdit->setObjectName("noAgendaLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, noAgendaLineEdit);

        tglSuratLabel = new QLabel(formLayoutWidget);
        tglSuratLabel->setObjectName("tglSuratLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, tglSuratLabel);

        tglSuratDateEdit = new QDateEdit(formLayoutWidget);
        tglSuratDateEdit->setObjectName("tglSuratDateEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, tglSuratDateEdit);

        tglTerimaLabel = new QLabel(formLayoutWidget);
        tglTerimaLabel->setObjectName("tglTerimaLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, tglTerimaLabel);

        tglTerimaDateEdit = new QDateEdit(formLayoutWidget);
        tglTerimaDateEdit->setObjectName("tglTerimaDateEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, tglTerimaDateEdit);

        asalSuratLabel = new QLabel(formLayoutWidget);
        asalSuratLabel->setObjectName("asalSuratLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, asalSuratLabel);

        asalSuratLineEdit = new QLineEdit(formLayoutWidget);
        asalSuratLineEdit->setObjectName("asalSuratLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, asalSuratLineEdit);

        tujuanLabel = new QLabel(formLayoutWidget);
        tujuanLabel->setObjectName("tujuanLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, tujuanLabel);

        tujuanLineEdit = new QLineEdit(formLayoutWidget);
        tujuanLineEdit->setObjectName("tujuanLineEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, tujuanLineEdit);

        perihalLabel = new QLabel(formLayoutWidget);
        perihalLabel->setObjectName("perihalLabel");

        formLayout->setWidget(6, QFormLayout::LabelRole, perihalLabel);

        perihalLineEdit = new QLineEdit(formLayoutWidget);
        perihalLineEdit->setObjectName("perihalLineEdit");

        formLayout->setWidget(6, QFormLayout::FieldRole, perihalLineEdit);

        sifatSuratLabel = new QLabel(formLayoutWidget);
        sifatSuratLabel->setObjectName("sifatSuratLabel");

        formLayout->setWidget(7, QFormLayout::LabelRole, sifatSuratLabel);

        sifatSuratLineEdit = new QLineEdit(formLayoutWidget);
        sifatSuratLineEdit->setObjectName("sifatSuratLineEdit");

        formLayout->setWidget(7, QFormLayout::FieldRole, sifatSuratLineEdit);

        pushButton = new QPushButton(formSuratMasuk);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 330, 111, 31));
        pushButton_2 = new QPushButton(formSuratMasuk);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(220, 330, 121, 31));
        pushButton_3 = new QPushButton(formSuratMasuk);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(360, 330, 111, 31));
        pushButton_4 = new QPushButton(formSuratMasuk);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(490, 330, 121, 31));
        tableSrtMsk = new QTableView(formSuratMasuk);
        tableSrtMsk->setObjectName("tableSrtMsk");
        tableSrtMsk->setGeometry(QRect(100, 400, 361, 192));

        retranslateUi(formSuratMasuk);

        QMetaObject::connectSlotsByName(formSuratMasuk);
    } // setupUi

    void retranslateUi(QWidget *formSuratMasuk)
    {
        formSuratMasuk->setWindowTitle(QCoreApplication::translate("formSuratMasuk", "Form", nullptr));
        noSuratMasukLabel->setText(QCoreApplication::translate("formSuratMasuk", "No Surat Masuk", nullptr));
        noAgendaLabel->setText(QCoreApplication::translate("formSuratMasuk", "No Agenda", nullptr));
        tglSuratLabel->setText(QCoreApplication::translate("formSuratMasuk", "Tgl Surat", nullptr));
        tglTerimaLabel->setText(QCoreApplication::translate("formSuratMasuk", "Tgl Terima", nullptr));
        asalSuratLabel->setText(QCoreApplication::translate("formSuratMasuk", "Asal Surat", nullptr));
        tujuanLabel->setText(QCoreApplication::translate("formSuratMasuk", "Tujuan", nullptr));
        perihalLabel->setText(QCoreApplication::translate("formSuratMasuk", "Perihal", nullptr));
        sifatSuratLabel->setText(QCoreApplication::translate("formSuratMasuk", "Sifat Surat", nullptr));
        pushButton->setText(QCoreApplication::translate("formSuratMasuk", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("formSuratMasuk", "Ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("formSuratMasuk", "Hapus", nullptr));
        pushButton_4->setText(QCoreApplication::translate("formSuratMasuk", "Cari", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formSuratMasuk: public Ui_formSuratMasuk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSURATMASUK_H
