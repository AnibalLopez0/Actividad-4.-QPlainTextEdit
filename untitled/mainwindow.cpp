#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "neuron.h"
#include "QPlainTextEdit"
#include "QSpinBox"

AdministradorNeuronas administrador;

//Neurona neurona1(ID, VOL, X, Y, R, G, B);

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()//mostrar
{
    ui->plainTextEdit->clear();
    ui->plainTextEdit->insertPlainText(administrador.obtenerInformacion());
}


void MainWindow::on_plainTextEdit_modificationChanged(bool arg1)//muestra caja
{
    ui->plainTextEdit->setReadOnly(true);
}


void MainWindow::on_pushButton_clicked()//añadir inicio
{
    int ID;
    float VOL;
    int X, Y;
    int R, G, B;
    ID = ui->spinBox->value();
    VOL = ui->doubleSpinBox->value();
    X = ui->spinBox_2->value();
    Y = ui->spinBox_3->value();
    R = ui->spinBox_4->value();
    G = ui->spinBox_5->value();
    B = ui->spinBox_6->value();
    Neurona n(ID, VOL, X, Y, R, G, B);
    administrador.agregarInicio(n);
}


void MainWindow::on_pushButton_3_clicked()//añadir final
{
    //administrador.agregarFinal(neurona1);
    int ID;
    float VOL;
    int X, Y;
    int R, G, B;
    ID = ui->spinBox->value();
    VOL = ui->doubleSpinBox->value();
    X = ui->spinBox_2->value();
    Y = ui->spinBox_3->value();
    R = ui->spinBox_4->value();
    G = ui->spinBox_5->value();
    B = ui->spinBox_6->value();
    Neurona n(ID, VOL, X, Y, R, G, B);
    administrador.agregarFinal(n);
}


void MainWindow::on_spinBox_valueChanged(int arg1)//no borrar, no sabes que pasa
{

}

