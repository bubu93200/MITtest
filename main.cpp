/////////////////////////////////////////////////////////////////////
// Test de MIT - Permet d'utiliser la librairie MScore
// Copyright(c) Bruno Donati
// 
/////////////////////////////////////////////////////////////////////

#include <QtCore>
#include <QGuiApplication>
//#include <QQmlApplicationEngine>
#include <QtGlobal>
//#include <QApplication>
#include <QtGlobal>
#include <QComboBox>
#include <QFile>
//#include <QVariant>
#include <Qset>

#include <QDebug>
#include "C:\\MUSESCORE\\MuseScore362GITHUB\\libmscore\\mscore.h"




int main(int argc, char *argv[])
{

 

    QVariant value = 3.14;
    qInfo() << "The value is:" << value;

    value = "Hello, world!";
    qInfo() << "The value is now:" << value;

return 0;



#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
   
    ///////////////////////////////////////////////////////////
    // Code essai de MuseScore

    //printf("Version de MuseScore: {}", Ms::MSCVERSION);
    
    ///////////////////////////////////////////////////////////

    QGuiApplication app(argc, argv);

    //QQmlApplicationEngine engine;
    //engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    //if (engine.rootObjects().isEmpty())
    //    return -1;

    //return app.exec();
    return 0;
}
