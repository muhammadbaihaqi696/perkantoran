#include "formsuratmasuk.h"
#include "ui_formsuratmasuk.h"
#include "QMessageBox"



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

    loadTabelSrtMsk();
}




void formSuratMasuk::loadTabelSrtMsk()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM surat_masuk ORDER BY no_surat_masuk ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("no_surat_masuk"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("no_agenda"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("tgl_surat"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("tgl_terima"));
    tabelModel->setHeaderData(4,Qt::Horizontal,QObject::tr("asal_surat"));
    tabelModel->setHeaderData(5,Qt::Horizontal,QObject::tr("tujuan"));
    tabelModel->setHeaderData(6,Qt::Horizontal,QObject::tr("perihal"));
    tabelModel->setHeaderData(7,Qt::Horizontal,QObject::tr("sifat_surat"));

    ui->tableSrtMsk->setModel(tabelModel);
    ui->tableSrtMsk->setColumnWidth(0,100);
    ui->tableSrtMsk->setColumnWidth(1,100);
    ui->tableSrtMsk->setColumnWidth(2,100);
    ui->tableSrtMsk->setColumnWidth(3,100);
    ui->tableSrtMsk->setColumnWidth(4,100);
    ui->tableSrtMsk->setColumnWidth(5,100);
    ui->tableSrtMsk->setColumnWidth(6,100);
    ui->tableSrtMsk->setColumnWidth(7,100);
    ui->tableSrtMsk->show();
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


void formSuratMasuk::on_tableSrtMsk_activated(const QModelIndex &index)
{
    int baris = ui->tableSrtMsk->currentIndex().row();
         // QMessageBox::information(this,"Warning",QString::number(baris));
         ui->noSuratMasukLineEdit->setText(ui->tableSrtMsk->model()->index(baris,0).data().toString());
         ui->noAgendaLineEdit->setText(ui->tableSrtMsk->model()->index(baris,1).data().toString());
         ui->tglSuratDateEdit->setDate(ui->tableSrtMsk->model()->index(baris,2).data().toDate());
         ui->tglTerimaDateEdit->setDate(ui->tableSrtMsk->model()->index(baris,3).data().toDate());
         ui->asalSuratLineEdit->setText(ui->tableSrtMsk->model()->index(baris,4).data().toString());
         ui->tujuanLineEdit->setText(ui->tableSrtMsk->model()->index(baris,5).data().toString());
         ui->perihalLineEdit->setText(ui->tableSrtMsk->model()->index(baris,6).data().toString());
         ui->sifatSuratLineEdit->setText(ui->tableSrtMsk->model()->index(baris,7).data().toString());
}

