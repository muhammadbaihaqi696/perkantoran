#include "formutama.h"
#include "ui_formutama.h"

formUtama::formUtama(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::formUtama)
{
    ui->setupUi(this);
    srtmskForm = new formSuratMasuk;
    srtklrForm = new formSuratKeluar;
}

formUtama::~formUtama()
{
    delete ui;
}

void formUtama::on_pushButton_clicked()
{
    srtmskForm->show();
}


void formUtama::on_pushButton_2_clicked()
{
    srtklrForm->show();
}

