#include <iostream>

#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QDebug>

int main(int argc, char *argv[]) 
{
    QApplication app(argc, argv);
    QMainWindow mainWindow;
    QLabel *label = new QLabel(&mainWindow);
    label->setText("Hello Qt World");
    mainWindow.show();
    return app.exec();
}
