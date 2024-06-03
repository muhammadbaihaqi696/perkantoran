#include "formsuratmasuk.h"
#include "ui_formsuratmasuk.h"

formSuratMasuk::formSuratMasuk(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::formSuratMasuk)
{
    ui->setupUi(this);

    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_perkantoran");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi";

    }
}

formSuratMasuk::~formSuratMasuk()
{
    delete ui;
}

void formSuratMasuk::on_pushButton_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("INSERT INTO surat_masuk (no_surat_masuk,no_agenda,tgl_surat,tgl_terima,asal_surat,tujuan,perihal,sifat_surat)"
                "VALUE (:no_surat_masuk,:no_agenda,:tgl_surat,:tgl_terima,:asal_surat,:tujuan,:perihal,:sifat_surat)");
    sql.bindValue(":no_surat_masuk",ui->noSuratMasukLineEdit->text());
    sql.bindValue(":no_agenda",ui->noAgendaLineEdit->text());
    sql.bindValue(":tgl_surat",ui->tglSuratDateEdit->date().toString("yyyy-MM-dd"));
    sql.bindValue(":tgl_terima",ui->tglTerimaDateEdit->date().toString("yyy-MM-dd"));
    sql.bindValue(":asal_surat",ui->asalSuratLineEdit->text());
    sql.bindValue(":tujuan",ui->tujuanLineEdit->text());
    sql.bindValue(":perihal",ui->perihalLineEdit->text());
    sql.bindValue(":sifat_surat",ui->sifatSuratLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Simpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void formSuratMasuk::on_pushButton_2_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("UPDATE surat_masuk SET no_agenda=:no_agenda, tgl_surat=:tgl_surat, tgl_terima=:tgl_terima, asal_surat=:asal_surat, tujuan=:tujuan, perihal=:perihal, "
                "sifat_surat=:sifat_surat WHERE no_surat_masuk=:no_surat_masuk");

    sql.bindValue(":no_surat_masuk",ui->noSuratMasukLineEdit->text());
    sql.bindValue(":no_agenda",ui->noAgendaLineEdit->text());
    sql.bindValue(":tgl_surat",ui->tglSuratDateEdit->date().toString("yyyy-MM-dd"));
    sql.bindValue(":tgl_terima",ui->tglTerimaDateEdit->date().toString("yyy-MM-dd"));
    sql.bindValue(":asal_surat",ui->asalSuratLineEdit->text());
    sql.bindValue(":tujuan",ui->tujuanLineEdit->text());
    sql.bindValue(":perihal",ui->perihalLineEdit->text());
    sql.bindValue(":sifat_surat",ui->sifatSuratLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Ubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void formSuratMasuk::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM surat_masuk WHERE no_surat_masuk=:no_surat_masuk");
    sql.bindValue(":no_surat_masuk",ui->noSuratMasukLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void formSuratMasuk::on_pushButton_4_clicked()
{
    QSqlQuery sql(koneksi);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM surat_masuk WHERE no_surat_masuk=:no_surat_masuk");
    sql.bindValue(":no_surat_masuk",ui->noSuratMasukLineEdit->text());

    if (sql.exec()){
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug()<<cari.value(0).toString();
    }else{
        qDebug()<<sql.lastError().text();
    }
}

