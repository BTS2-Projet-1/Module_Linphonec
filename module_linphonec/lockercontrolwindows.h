#ifndef LOCKERCONTROLWINDOWS_H
#define LOCKERCONTROLWINDOWS_H

#include <QMainWindow>
#include <QProcess>

namespace Ui {
class LockerControlWindows;
}

class LockerControlWindows : public QMainWindow
{
    Q_OBJECT

public:
    explicit LockerControlWindows(QWidget *parent = 0);
    ~LockerControlWindows();

private:
    Ui::LockerControlWindows *ui;
    QProcess *m_linphonec;
    //créer objet tube?
};

#endif // LOCKERCONTROLWINDOWS_H
