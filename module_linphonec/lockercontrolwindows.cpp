#include "lockercontrolwindows.h"
#include "ui_lockercontrolwindows.h"

LockerControlWindows::LockerControlWindows(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LockerControlWindows)
{
    ui->setupUi(this);
    //création d'un nouvel objet de type QProcess
    m_linphonec = new QProcess();
    QStringList arg;
        arg << "-V";
    //Démarrage du programme Linphonec
    m_linphonec->start("/usr/bin/./linphonec",arg);
   /* QStringList arg;
    arg << "-V";
    m_linphonec->execute("./usr/bin/linphonec",arg);*/
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
