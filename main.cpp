#include "mainwindow.h"
#include <QFile>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /// set the style
    QFile styleSheetFile("D:\\programming\\qt_projects\\design\\SyNet.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    a.setStyleSheet(styleSheet);
    MainWindow w;
    w.show();
    return a.exec();


}
