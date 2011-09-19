#include <QtGui/QApplication>
#include "pdfreader.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PdfReader w;

    w.show();

    return a.exec();
}
