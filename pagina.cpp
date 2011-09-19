#include "pagina.h"
#include <QDebug>
Pagina::Pagina(QLabel *parent) :
    QLabel(parent)
{
}


void Pagina::FitToWindow(int width){
    Q_ASSERT(this->pixmap());
    qDebug() << QString("Escalando pagina %1 para %2 ").arg(this->numPagina).arg(width);
    this->setScaledContents(false);
    QPixmap pixmap(":/paginas/modelo.png");
    this->setPixmap(pixmap.scaledToWidth((width)));
}
