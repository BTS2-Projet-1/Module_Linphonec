#ifndef SIMULINPHONEC_H
#define SIMULINPHONEC_H

#include <QMainWindow>

namespace Ui {
class simuLinphonec;
}

class simuLinphonec : public QMainWindow
{
    Q_OBJECT

public:
    explicit simuLinphonec(QWidget *parent = 0);
    ~simuLinphonec();

private:
    Ui::simuLinphonec *ui;
};

#endif // SIMULINPHONEC_H
