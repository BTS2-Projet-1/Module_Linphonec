#include "lockercontrolwindows.h"
#include "ui_lockercontrolwindows.h"

LockerControlWindows::LockerControlWindows(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LockerControlWindows)
{
    ui->setupUi(this);
}

LockerControlWindows::~LockerControlWindows()
{
    delete ui;
}
