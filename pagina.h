#ifndef PAGINA_H
#define PAGINA_H

#include <QObject>
#include <QLabel>


class Pagina : public QLabel
{
    Q_OBJECT
public:
    explicit Pagina(QLabel *parent = 0);
    int numPagina;

public slots:
    void FitToWindow(int width);


};

#endif // PAGINA_H
