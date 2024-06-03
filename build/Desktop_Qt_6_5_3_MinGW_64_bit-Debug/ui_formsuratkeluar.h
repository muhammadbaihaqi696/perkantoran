/********************************************************************************
** Form generated from reading UI file 'formsuratkeluar.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSURATKELUAR_H
#define UI_FORMSURATKELUAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formSuratKeluar
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *noSuratKeluarLabel;
    QLineEdit *noSuratKeluarLineEdit;
    QLabel *noAgendaLabel;
    QLineEdit *noAgendaLineEdit;
    QLabel *tglSuratLabel;
    QDateEdit *tglSuratDateEdit;
    QLabel *asalSuratLabel;
    QLineEdit *asalSuratLineEdit;
    QLabel *tujuanLabel;
    QLineEdit *tujuanLineEdit;
    QLabel *perihalLabel;
    QLineEdit *perihalLineEdit;
    QLabel *sifatSuratLabel;
    QLineEdit *sifatSuratLineEdit;
    QLabel *hubSuratLabel;
    QLineEdit *hubSuratLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *formSuratKeluar)
    {
        if (formSuratKeluar->objectName().isEmpty())
            formSuratKeluar->setObjectName("formSuratKeluar");
        formSuratKeluar->resize(736, 522);
        formLayoutWidget = new QWidget(formSuratKeluar);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(110, 40, 521, 281));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        noSuratKeluarLabel = new QLabel(formLayoutWidget);
        noSuratKeluarLabel->setObjectName("noSuratKeluarLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, noSuratKeluarLabel);

        noSuratKeluarLineEdit = new QLineEdit(formLayoutWidget);
        noSuratKeluarLineEdit->setObjectName("noSuratKeluarLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, noSuratKeluarLineEdit);

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

        asalSuratLabel = new QLabel(formLayoutWidget);
        asalSuratLabel->setObjectName("asalSuratLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, asalSuratLabel);

        asalSuratLineEdit = new QLineEdit(formLayoutWidget);
        asalSuratLineEdit->setObjectName("asalSuratLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, asalSuratLineEdit);

        tujuanLabel = new QLabel(formLayoutWidget);
        tujuanLabel->setObjectName("tujuanLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, tujuanLabel);

        tujuanLineEdit = new QLineEdit(formLayoutWidget);
        tujuanLineEdit->setObjectName("tujuanLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, tujuanLineEdit);

        perihalLabel = new QLabel(formLayoutWidget);
        perihalLabel->setObjectName("perihalLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, perihalLabel);

        perihalLineEdit = new QLineEdit(formLayoutWidget);
        perihalLineEdit->setObjectName("perihalLineEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, perihalLineEdit);

        sifatSuratLabel = new QLabel(formLayoutWidget);
        sifatSuratLabel->setObjectName("sifatSuratLabel");

        formLayout->setWidget(6, QFormLayout::LabelRole, sifatSuratLabel);

        sifatSuratLineEdit = new QLineEdit(formLayoutWidget);
        sifatSuratLineEdit->setObjectName("sifatSuratLineEdit");

        formLayout->setWidget(6, QFormLayout::FieldRole, sifatSuratLineEdit);

        hubSuratLabel = new QLabel(formLayoutWidget);
        hubSuratLabel->setObjectName("hubSuratLabel");

        formLayout->setWidget(7, QFormLayout::LabelRole, hubSuratLabel);

        hubSuratLineEdit = new QLineEdit(formLayoutWidget);
        hubSuratLineEdit->setObjectName("hubSuratLineEdit");

        formLayout->setWidget(7, QFormLayout::FieldRole, hubSuratLineEdit);

        pushButton = new QPushButton(formSuratKeluar);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 340, 111, 29));
        pushButton_2 = new QPushButton(formSuratKeluar);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(250, 340, 111, 29));
        pushButton_3 = new QPushButton(formSuratKeluar);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(380, 340, 111, 29));
        pushButton_4 = new QPushButton(formSuratKeluar);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(520, 340, 111, 29));

        retranslateUi(formSuratKeluar);

        QMetaObject::connectSlotsByName(formSuratKeluar);
    } // setupUi

    void retranslateUi(QWidget *formSuratKeluar)
    {
        formSuratKeluar->setWindowTitle(QCoreApplication::translate("formSuratKeluar", "Form", nullptr));
        noSuratKeluarLabel->setText(QCoreApplication::translate("formSuratKeluar", "No Surat Keluar", nullptr));
        noAgendaLabel->setText(QCoreApplication::translate("formSuratKeluar", "No Agenda", nullptr));
        tglSuratLabel->setText(QCoreApplication::translate("formSuratKeluar", "Tgl Surat", nullptr));
        asalSuratLabel->setText(QCoreApplication::translate("formSuratKeluar", "Asal Surat", nullptr));
        tujuanLabel->setText(QCoreApplication::translate("formSuratKeluar", "Tujuan", nullptr));
        perihalLabel->setText(QCoreApplication::translate("formSuratKeluar", "Perihal", nullptr));
        sifatSuratLabel->setText(QCoreApplication::translate("formSuratKeluar", "Sifat Surat", nullptr));
        hubSuratLabel->setText(QCoreApplication::translate("formSuratKeluar", "Hub Surat", nullptr));
        pushButton->setText(QCoreApplication::translate("formSuratKeluar", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("formSuratKeluar", "Ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("formSuratKeluar", "Hapus", nullptr));
        pushButton_4->setText(QCoreApplication::translate("formSuratKeluar", "Cari", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formSuratKeluar: public Ui_formSuratKeluar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSURATKELUAR_H
