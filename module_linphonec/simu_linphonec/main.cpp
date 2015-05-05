#include "simulinphonec.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    simuLinphonec w;
    w.show();

    return a.exec();
}
