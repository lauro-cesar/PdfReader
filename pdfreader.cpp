#include "pdfreader.h"
#include "ui_pdfreader.h"
#include "pagina.h"
#include <QtCore>
#include <QList>

PdfReader::PdfReader(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PdfReader)
{
    ui->setupUi(this);

    connect(this->ui->addPage, SIGNAL(clicked()), this, SLOT(novaPagina()) );
    connect(this->ui->fitIt, SIGNAL(clicked()),this,SLOT(FitToWindow()));



}

PdfReader::~PdfReader()
{
    delete ui;
}


void PdfReader::FitToWindow() {
    emit this->NewWidth( (this->ui->desktop->width()-100) );



}

void PdfReader::AutoAdd(int valor) {

    qDebug() << valor;
    /*
    if( valor == this->ui->desktop->verticalScrollBar()->maximum() ){
    this->novaPagina();
    }
*/

}

void PdfReader::novaPagina() {



    //TODO: depois le do pdf.... agora só add uma a mais...
    this->AddPage(this->paginas.count()+1);
}

void PdfReader::AddPage(int page) {
    Pagina *pagina = new Pagina;
    pagina->setBackgroundRole(QPalette::Base);
    connect(this,SIGNAL(NewWidth(int)),pagina,SLOT(FitToWindow(int)));
    pagina->numPagina = page;
    this->paginas.append(pagina);
    this->ui->corpo->addWidget(pagina);
    emit this->NewWidth( (this->ui->desktop->width()-100) );

}
