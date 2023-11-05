#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton_manual->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_radioButton_manual_clicked()
{
    ui->setting_operating_mode_w->setCurrentIndex(0);
}


void MainWindow::on_radioButton_param_clicked()
{
    ui->setting_operating_mode_w->setCurrentIndex(1);
}


void MainWindow::on_radioButton_profile_clicked()
{
    ui->setting_operating_mode_w->setCurrentIndex(2);
}

