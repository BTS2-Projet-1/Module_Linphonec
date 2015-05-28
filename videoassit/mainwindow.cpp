#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<phonon/VideoCaptureDevice>
#include<phonon/AudioOutput>
#include<phonon/AudioCaptureDevice>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_mediaobjet = new Phonon::MediaObject(this);
   // m_mediaobjet->enqueue(Phonon::MediaSource("/dev/video0"));
    m_mediaobjet->setCurrentSource(Phonon::MediaSource(QUrl("v4l2://///dev/video0")));
       Phonon::createPath(m_mediaobjet, ui->VideoWidget);
    ui->VideoWidget->setAspectRatio(Phonon::VideoWidget::AspectRatio4_3);

     Phonon::AudioOutput *audioOutput = new Phonon::AudioOutput(Phonon::VideoCategory, this);
     audioOutput->setVolume(100);
     audioOutput->setVolumeDecibel(10);


       Phonon::createPath(m_mediaobjet, audioOutput);

        m_mediaobjet->play();
}

MainWindow::~MainWindow()
{
    delete ui;
}
