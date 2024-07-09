#include "formsuratkeluar.h"
#include "ui_formsuratkeluar.h"
#include <QMessageBox>

formSuratKeluar::formSuratKeluar(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::formSuratKeluar)
{
    ui->setupUi(this);

    loadTabelSrtKlr();
}

void formSuratKeluar::loadTabelSrtKlr()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM surat_keluar ORDER BY no_surat_keluar ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("no_surat_keluar"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("no_agenda"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("tgl_surat"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("asal_surat"));
    tabelModel->setHeaderData(4,Qt::Horizontal,QObject::tr("tujuan"));
    tabelModel->setHeaderData(5,Qt::Horizontal,QObject::tr("perihal"));
    tabelModel->setHeaderData(6,Qt::Horizontal,QObject::tr("sifat_surat"));
    tabelModel->setHeaderData(7,Qt::Horizontal,QObject::tr("hub_surat"));

    ui->tableSrtKlr->setModel(tabelModel);
    ui->tableSrtKlr->setColumnWidth(0,100);
    ui->tableSrtKlr->setColumnWidth(1,100);
    ui->tableSrtKlr->setColumnWidth(2,100);
    ui->tableSrtKlr->setColumnWidth(3,100);
    ui->tableSrtKlr->setColumnWidth(4,100);
    ui->tableSrtKlr->setColumnWidth(5,100);
    ui->tableSrtKlr->setColumnWidth(6,100);
    ui->tableSrtKlr->setColumnWidth(7,100);
    ui->tableSrtKlr->show();
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


void formSuratKeluar::on_tableSrtKlr_activated(const QModelIndex &index)
{
    int baris = ui->tableSrtKlr->currentIndex().row();
    // QMessageBox::information(this,"Warning",QString::number(baris));
    ui->noSuratKeluarLineEdit->setText(ui->tableSrtKlr->model()->index(baris,0).data().toString());
    ui->noAgendaLineEdit->setText(ui->tableSrtKlr->model()->index(baris,1).data().toString());
    ui->tglSuratDateEdit->setDate(ui->tableSrtKlr->model()->index(baris,2).data().toDate());
    ui->asalSuratLineEdit->setText(ui->tableSrtKlr->model()->index(baris,3).data().toString());
    ui->tujuanLineEdit->setText(ui->tableSrtKlr->model()->index(baris,4).data().toString());
    ui->perihalLineEdit->setText(ui->tableSrtKlr->model()->index(baris,5).data().toString());
    ui->sifatSuratLineEdit->setText(ui->tableSrtKlr->model()->index(baris,6).data().toString());
    ui->hubSuratLineEdit->setText(ui->tableSrtKlr->model()->index(baris,7).data().toString());
}

