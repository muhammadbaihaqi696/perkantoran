#ifndef FORMSURATMASUK_H
#define FORMSURATMASUK_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlQueryModel>

namespace Ui {
class formSuratMasuk;
}

class formSuratMasuk : public QWidget
{
    Q_OBJECT

public:
    explicit formSuratMasuk(QWidget *parent = nullptr);
    void loadTabelSrtMsk();
    ~formSuratMasuk();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_tableSrtMsk_activated(const QModelIndex &index);

private:
    Ui::formSuratMasuk *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlRecord cari;
    QSqlQueryModel *tabelModel;
};

#endif // FORMSURATMASUK_H
