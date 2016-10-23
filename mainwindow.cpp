#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "functionalclass.h"

functionalClass obj;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_countLineBtn_clicked()
{
    //количество строк кода
      QString str = ui->plainTextEdit->toPlainText();
      obj.setCode(str);
      int n = obj.getAllLines();
      ui->countLineValue->setText(QString::number(n+1));
}
//agaga
void MainWindow::on_epmtyLineBtn_clicked()
{
    //количество пустых строк
      int n = obj.getEmptyLines();
      ui->emptyLineValue->setText(QString::number(n+1));
}
//hello
void MainWindow::on_commentLineBtn_clicked()
{
    //количество строк  с комментариями
     int n = obj.getCommentLines();
     ui->commentLineValue->setText(QString::number(n));
}

void MainWindow::on_commentOutputLineBtn_clicked()
{
    //количество строк выходного кода с комментариями
     int n = obj.getOutputCommentLines();
     ui->commentOutputLineValue->setText(QString::number(n));
}

void MainWindow::on_commentPrecentBtn_clicked()
{
    //процент закомментированных строк
      int n = obj.getCommentPrecent();
      ui->commentPrecentValue->setText(QString::number(n)+"%");

}

void MainWindow::on_operatorBtn_clicked()
{
     //количество операторов (кількість унікальних операторів програми, також символи-роздільники, імена процедур і знаки операцій)
    int n = obj.getOperators();
    ui->operatorValue->setText(QString::number(n));
}



void MainWindow::on_operandBtn_clicked()
{
    //количество операндов (кількість унікальних операндів програми)
    int n = obj.getOperands();
    ui->operandValue->setText(QString::number(n));
}

void MainWindow::on_operatorAllBtn_clicked()
{
    // общее количество операторов
    int n = obj.getAllOperators();
     ui->operatorAllValue->setText(QString::number(n));
}

void MainWindow::on_opreandAllBtn_clicked()
{
     int n = obj.getAllOperands();
    ui->operandAllValue->setText(QString::number(n));

}

void MainWindow::on_legthBtn_clicked()
{
    //длина программы
    int n = obj.getLength();
    ui->lenghtValue->setText(QString::number(n));
}

void MainWindow::on_volumeBtn_clicked()
{
    //объём программы
    float n = obj.getVolume();
   ui->volumeValue->setText(QString::number(n));
}

void MainWindow::on_ciklomatBtn_clicked()
{
    //циклометическая сложность
    int n = obj.ciclomatic();
    ui->ciklomatValue->setText(QString::number(n));
}

void MainWindow::on_maxBtn_clicked()
{
    //максимальный уровень вложенности и длина программы
    int n = obj.maxCode();
      ui->maxValue->setText(QString::number(n));
}
