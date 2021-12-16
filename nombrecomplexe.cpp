#include "nombrecomplexe.h"
#include "ui_nombrecomplexe.h"
#include "qmessagebox.h"
#include "qmath.h"


NombreComplexe::NombreComplexe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NombreComplexe)
{
    ui->setupUi(this);
    ui->imgInput->setText("0");
    ui->reelInput->setText("0");

}

NombreComplexe::~NombreComplexe()
{
    delete ui;
}


void NombreComplexe::on_saveBtn_clicked()
{
    double relle = ui->reelInput->text().toDouble();
    double img = ui->imgInput->text().toDouble();
    double module = sqrt(pow(relle, 2)+pow(img, 2));
    ui->mdlInput->setText(QString::number(module));
    QMessageBox::information(this, "Titre de la fenetre", "Enregistrement effectué");
}

void NombreComplexe::on_reelInput_textChanged(const QString &arg1)
{
    double module = calculateModule(arg1.toDouble(), ui->imgInput->text().toDouble());
    ui->mdlInput->setText(QString::number(module));
}

void NombreComplexe::on_imgInput_textChanged(const QString &arg1)
{
    double module = calculateModule(ui->reelInput->text().toDouble(), arg1.toDouble());
    ui->mdlInput->setText(QString::number(module));
}

double NombreComplexe::calculateModule(double reele, double img){
    return sqrt(pow(reele, 2)+pow(img, 2));
}
