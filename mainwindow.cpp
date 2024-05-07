#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "BodyData.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , qDoubleValidator(0.0, -1.0, -1)
{
    ui->setupUi(this);

    qDoubleValidator.setNotation(QDoubleValidator::ScientificNotation);

    QLineEdit* lineEditsWithDoubleValidators[] = {
            ui->weightEdit,
            ui->heightEdit,
            ui->chestGirthEdit,
            ui->waistGirthEdit,
            ui->hipGirthEdit,
            ui->bodyfatEdit,
            ui->muscleEdit,
            ui->proteinEdit,
            ui->boneMassEdit,
            ui->visceralFatEdit,
            ui->basalMetabolismEdit,
            ui->bmiEdit
    };

    for (QLineEdit* edit : lineEditsWithDoubleValidators) {
        edit->setValidator(&qDoubleValidator);
    }
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
