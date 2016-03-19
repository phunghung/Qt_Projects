#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTextStream>

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

void MainWindow::on_pushButton_clicked()
{
    QString s1 = "phunghung";
    QString s2 = "12345";

//    if (strcmpi(ui->lineEdit, s1) && strcmpi(ui->lineEdit_2, s2))
    if (QString::compare(ui->Text_User->text(), s1) == 0  && QString::compare(ui->Text_Password->text(), s2) == 0)
    {
        ui->label_status->setText("Success");
        QMessageBox::information(this, tr("The Yahoo"), tr("Correct"));
        QMessageBox::question(this, tr("The Yahoo"), tr("You want continue?"));

    }
    else
    {
        ui->label_status->setText("False");
        QMessageBox::critical(this, tr("The Yahoo"), tr("Incorrect user name or password"));
    }
}
