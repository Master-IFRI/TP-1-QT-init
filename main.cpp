#include "nombrecomplexe.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NombreComplexe w;
    w.show();

    return a.exec();
}
