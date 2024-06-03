#ifndef FORMSURATMASUK_H
#define FORMSURATMASUK_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>

namespace Ui {
class formSuratMasuk;
}

class formSuratMasuk : public QWidget
{
    Q_OBJECT

public:
    explicit formSuratMasuk(QWidget *parent = nullptr);
    ~formSuratMasuk();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::formSuratMasuk *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlRecord cari;
};

#endif // FORMSURATMASUK_H
