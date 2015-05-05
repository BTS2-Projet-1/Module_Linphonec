#ifndef LOCKERCONTROLWINDOWS_H
#define LOCKERCONTROLWINDOWS_H

#include <QMainWindow>

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
};

#endif // LOCKERCONTROLWINDOWS_H
