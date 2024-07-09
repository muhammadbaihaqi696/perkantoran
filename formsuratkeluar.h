#ifndef FORMSURATKELUAR_H
#define FORMSURATKELUAR_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlQueryModel>

namespace Ui {
class formSuratKeluar;
}

class formSuratKeluar : public QWidget
{
    Q_OBJECT

public:
    explicit formSuratKeluar(QWidget *parent = nullptr);
    void loadTabelSrtKlr();
    ~formSuratKeluar();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();


    void on_tableSrtKlr_activated(const QModelIndex &index);

private:
    Ui::formSuratKeluar *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlRecord cari;
    QSqlQueryModel *tabelModel;
};

#endif // FORMSURATKELUAR_H
