#include "mainwindow.h"
#include "converttarget.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // Example convert usage
    ConvertTarget target( "10000", 10 );
    qWarning() << "Result:" << target.convert(2);
    return a.exec();
}
