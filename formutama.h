#ifndef FORMUTAMA_H
#define FORMUTAMA_H

#include <QMainWindow>
#include <formsuratmasuk.h>
#include <formsuratkeluar.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class formUtama;
}
QT_END_NAMESPACE

class formUtama : public QMainWindow
{
    Q_OBJECT

public:
    formUtama(QWidget *parent = nullptr);
    ~formUtama();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::formUtama *ui;
    formSuratMasuk *srtmskForm;
    formSuratKeluar *srtklrForm;
};
#endif // FORMUTAMA_H
