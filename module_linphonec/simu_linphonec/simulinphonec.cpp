#include "simulinphonec.h"
#include "ui_simulinphonec.h"

simuLinphonec::simuLinphonec(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::simuLinphonec)
{
    ui->setupUi(this);
}

simuLinphonec::~simuLinphonec()
{
    delete ui;
}
