#include "lockercontrolwindows.h"
#include "ui_lockercontrolwindows.h"

LockerControlWindows::LockerControlWindows(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LockerControlWindows)
{
    ui->setupUi(this);
    //création d'un nouvel objet de type QProcess
    m_linphonec = new QProcess();

    //Démarrage du programme qui simule Linphonec
    m_linphonec->start("/home/tpbts2/ProjetBTS2/module_linphonec/Module_Linphonec/module_linphonec/build-simu_linphonec-Desktop-Debug/simu_linphonec");
};

LockerControlWindows::~LockerControlWindows()
{
    //après fermeture du programme principal, simu_linphonec se ferme au bout de 1/2 sec
    m_linphonec->waitForFinished(500);
    m_linphonec->terminate();

    //destruction de l'objet simu_linphonec
    delete m_linphonec;

    delete ui;
}
