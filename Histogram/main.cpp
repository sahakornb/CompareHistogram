#include "histogram.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Histogram w;
    w.show();

    return a.exec();
}
