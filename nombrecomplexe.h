#ifndef NOMBRECOMPLEXE_H
#define NOMBRECOMPLEXE_H

#include <QDialog>

namespace Ui {
class NombreComplexe;
}

class NombreComplexe : public QDialog
{
    Q_OBJECT

public:
    explicit NombreComplexe(QWidget *parent = 0);
    ~NombreComplexe();

private slots:
    void on_saveBtn_clicked();

    void on_reelInput_textChanged(const QString &arg1);

    void on_imgInput_textChanged(const QString &arg1);

    double calculateModule(double, double);

private:
    Ui::NombreComplexe *ui;
};

#endif // NOMBRECOMPLEXE_H
