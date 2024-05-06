#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "BodyData.h"

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

void MainWindow::on_pushButton_clicked()
{
    BodyData bodydata {

    };
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex() + 1);
}
