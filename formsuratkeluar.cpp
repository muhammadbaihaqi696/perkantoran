#include "formsuratkeluar.h"
#include "ui_formsuratkeluar.h"

formSuratKeluar::formSuratKeluar(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::formSuratKeluar)
{
    ui->setupUi(this);
}

formSuratKeluar::~formSuratKeluar()
{
    delete ui;
}

void formSuratKeluar::on_pushButton_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("INSERT INTO surat_keluar (no_surat_keluar,no_agenda,tgl_surat,asal_surat,tujuan,perihal,sifat_surat,hub_surat)"
                "VALUE (:no_surat_keluar,:no_agenda,:tgl_surat,:asal_surat,:tujuan,:perihal,:sifat_surat,:hub_surat)");
    sql.bindValue(":no_surat_keluar",ui->noSuratKeluarLineEdit->text());
    sql.bindValue(":no_agenda",ui->noAgendaLineEdit->text());
    sql.bindValue(":tgl_surat",ui->tglSuratDateEdit->date().toString("yyyy-MM-dd"));
    sql.bindValue(":asal_surat",ui->asalSuratLineEdit->text());
    sql.bindValue(":tujuan",ui->tujuanLineEdit->text());
    sql.bindValue(":perihal",ui->perihalLineEdit->text());
    sql.bindValue(":sifat_surat",ui->sifatSuratLineEdit->text());
    sql.bindValue(":hub_surat",ui->hubSuratLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Simpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void formSuratKeluar::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE surat_keluar SET no_agenda=:no_agenda, tgl_surat=:tgl_surat, asal_surat=:asal_surat,tujuan=:tujuan, perihal=:perihal, "
                "sifat_surat=:sifat_surat, hub_surat=:hub_surat WHERE no_surat_keluar=:no_surat_keluar");

    sql.bindValue(":no_surat_keluar", ui->noSuratKeluarLineEdit->text());
    sql.bindValue(":no_agenda", ui->noAgendaLineEdit->text());
    sql.bindValue(":tgl_surat", ui->tglSuratDateEdit->date().toString("yyyy-MM-dd"));
    sql.bindValue(":asal_surat", ui->asalSuratLineEdit->text());
    sql.bindValue(":tujuan", ui->tujuanLineEdit->text());
    sql.bindValue(":perihal", ui->perihalLineEdit->text());
    sql.bindValue(":sifat_surat", ui->sifatSuratLineEdit->text());
    sql.bindValue(":hub_surat", ui->hubSuratLineEdit->text());

    if (sql.exec()) {
        qDebug() << "Data Berhasil Di Ubah";
    } else {
        qDebug() << sql.lastError().text();
    }
}


void formSuratKeluar::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM surat_keluar WHERE no_surat_keluar=:no_surat_keluar");
    sql.bindValue(":no_surat_keluar", ui->noSuratKeluarLineEdit->text());

    if (sql.exec()) {
        qDebug() << "Data Berhasil Di Hapus";
    } else {
        qDebug() << sql.lastError().text();
    }
}


void formSuratKeluar::on_pushButton_4_clicked()
{
    QSqlQuery sql(koneksi);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM surat_keluar WHERE no_surat_keluar=:no_surat_keluar");
    sql.bindValue(":no_surat_keluar", ui->noSuratKeluarLineEdit->text());

    if (sql.exec()) {
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug() << cari.value(0).toString();
    } else {
        qDebug() << sql.lastError().text();
    }
}

