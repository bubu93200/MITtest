/////////////////////////////////////////////////////////////////////
// Test de MIT - Permet d'utiliser la librairie MScore
// Copyright(c) Bruno Donati
// 
/////////////////////////////////////////////////////////////////////
#include <QtCore>
#include <QGuiApplication>
#include <QApplication>
#include <QWindow>
#include <QPainter>
#include <QPaintEvent>
//#include <QQmlApplicationEngine>
#include <QtGlobal>
//#include <QApplication>
#include <QtGlobal>
#include <QComboBox>
#include <QFile>
#include <QVariant>
#include <Qset>
#include <QDebug>

#include <array>
#include<set>

#include "C:\\MUSESCORE\\MuseScore362GITHUB\\libmscore\\mscore.h"



int main(int argc, char *argv[])
{


    QVariant value = 3.14;
    qInfo() << "The value is:" << value;

    value = "Hello, world!";
    qInfo() << "The value is now:" << value;


#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
   
    ///////////////////////////////////////////////////////////
    // Code essai de MuseScore

    //printf("Version de MuseScore: {}", Ms::MSCVERSION);
    
    ///////////////////////////////////////////////////////////
     // Afficher la version de la librairie Musescore
    int version = Ms::MSCVERSION;
    //Ms::Score score;
    Ms::Score score{};


    QGuiApplication app(argc, argv);

    QWindow window;
    window.setTitle("Fenetre de Test");
    window.resize(640, 480);
    window.show();


    return app.exec();
 
    return 0;
}
