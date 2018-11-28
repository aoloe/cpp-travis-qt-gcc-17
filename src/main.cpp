#include <iostream>

#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[]) 
{
    static_assert("C++17");
    std::cout << "Hello world\n";

    QCoreApplication a(argc, argv);
    
    qDebug() << "Hello World";

    return a.exec();
}
