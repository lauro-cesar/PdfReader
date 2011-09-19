#ifndef PDFREADER_H
#define PDFREADER_H
#include <QObject>
#include <QMainWindow>
#include "pagina.h"

namespace Ui {
    class PdfReader;
}

class PdfReader : public QMainWindow
{
    Q_OBJECT

public:
     PdfReader(QWidget *parent = 0);
    ~PdfReader();
    Pagina *pagina;
    QList<Pagina *> paginas;



public slots:
    void AddPage(int page);
    void novaPagina();
    void FitToWindow();
    void AutoAdd(int valor);

private:
    Ui::PdfReader *ui;
    QList<QLabel *> itens;


signals:
    void NewWidth(int width);
};

#endif // PDFREADER_H
