#include <iostream>

#include <QCoreApplication>
#include <QTimer>
#include <QDebug>

int main(int argc, char *argv[]) 
{
    static_assert("C++17");
    std::cout << "Hello world\n";

    QCoreApplication app(argc, argv);

    QTimer::singleShot( 0, &app, &QCoreApplication::quit );
    
    qDebug() << "Hello Qt-World";

    return app.exec();
}
