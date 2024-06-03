#ifndef FORMSURATKELUAR_H
#define FORMSURATKELUAR_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>

namespace Ui {
class formSuratKeluar;
}

class formSuratKeluar : public QWidget
{
    Q_OBJECT

public:
    explicit formSuratKeluar(QWidget *parent = nullptr);
    ~formSuratKeluar();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::formSuratKeluar *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlRecord cari;
};

#endif // FORMSURATKELUAR_H
