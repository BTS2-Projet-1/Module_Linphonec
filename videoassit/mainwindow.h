#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCoreApplication>
#include <phonon/MediaObject>
#include <phonon/MediaSource>
#include<phonon/Path>
#include<phonon/VideoCaptureDevice>
#include<phonon/VideoWidget>

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;

    Phonon::MediaSource *m_source;
    Phonon::MediaObject *m_mediaobjet;
};

#endif // MAINWINDOW_H
