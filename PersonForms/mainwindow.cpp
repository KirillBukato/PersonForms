#include "mainwindow.h"
#include "PersonForms/ui_mainwindow.h"

#include "BodyData.h"
#include "GeneralData.h"
#include "PersonData.h"

#include <array>

std::array<QLineEdit*, 11> lineEdits;
GeneralData* generalData;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , qDoubleValidator(0.0, -1.0, -1)
{
    ui->setupUi(this);

    qDoubleValidator.setNotation(QDoubleValidator::ScientificNotation);

    lineEdits = {
        ui->weightEdit,
        ui->heightEdit,
        ui->chestGirthEdit,
        ui->waistGirthEdit,
        ui->hipGirthEdit,
        ui->bodyfatEdit,
        ui->muscleEdit,
        ui->proteinEdit,
        ui->visceralFatEdit,
        ui->basalMetabolismEdit,
        ui->bmiEdit
    };

    for (QLineEdit* edit : lineEdits) {
        edit->setValidator(&qDoubleValidator);
    }
/*
    QLineEdit* lineEditsWithIntegerValidators[] = {
            ui->ageEdit
    };


    for (QLineEdit* edit : lineEditsWithIntegerValidators) {
        //set integer validators
    }
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    BodyData bodyData = {
        ui->weightEdit->text().toDouble(),
        ui->heightEdit->text().toDouble(),
        ui->chestGirthEdit->text().toDouble(),
        ui->waistGirthEdit->text().toDouble(),
        ui->hipGirthEdit->text().toDouble(),
        ui->bodyfatEdit->text().toDouble(),
        ui->muscleEdit->text().toDouble(),
        ui->waterEdit->text().toDouble(),
        ui->proteinEdit->text().toDouble(),
        ui->visceralFatEdit->text().toDouble(),
        ui->basalMetabolismEdit->text().toDouble(),
        ui->bmiEdit->text().toDouble(),
        WeightType(ui->bodyTypeCombobox->currentIndex())
    };
}


void MainWindow::on_nextPageButton_clicked()
{
    GeneralData* pGeneralData = new GeneralData();


    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex() + 1);
}

void MainWindow::on_prevPageButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex() - 1);
}