#include "lockercontrolwindows.h"
#include "ui_lockercontrolwindows.h"

LockerControlWindows::LockerControlWindows(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LockerControlWindows)
{
    ui->setupUi(this);
    m_linphonec = new QProcess();//création d'un nouvel objet de type QProcess

    //Démarrage du programme qui simule Linphonec
    m_linphonec->start("/home/tpbts2/ProjetBTS2/module_linphonec/Module_Linphonec/module_linphonec/build-simu_linphonec-Desktop-Debug/simu_linphonec");
};

LockerControlWindows::~LockerControlWindows()
{
    m_linphonec->waitForFinished(500); //après fermeture, du programme principal, simu_linphonec se ferme au bout de 1/2 sec
    m_linphonec->terminate();
    delete m_linphonec; //destruction de l'objet simu_linphonec

    delete ui;
}
