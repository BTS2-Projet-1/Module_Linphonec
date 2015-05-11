#include "lockercontrolwindows.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LockerControlWindows w;
    w.show();


    return a.exec();
}
