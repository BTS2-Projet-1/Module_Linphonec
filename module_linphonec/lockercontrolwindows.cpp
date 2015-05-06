#include "lockercontrolwindows.h"
#include "ui_lockercontrolwindows.h"

LockerControlWindows::LockerControlWindows(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LockerControlWindows)
{
    ui->setupUi(this);
    m_linphonec = new QProcess();
    m_linphonec->start("/home/tpbts2/ProjetBTS2/module_linphonec/Module_Linphonec/module_linphonec/build-simu_linphonec-Desktop-Debug/simu_linphonec");
    //créer les deux tubes.

};

LockerControlWindows::~LockerControlWindows()
{
    m_linphonec->waitForFinished(500);
    m_linphonec->terminate();
    delete m_linphonec;

    delete ui;
}
