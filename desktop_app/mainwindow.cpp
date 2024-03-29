#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton_manual->setChecked(true);
    ui->radioButton_setting_climat->setChecked(true);
    ui->setting_operating_mode_w->setCurrentIndex(0);
    ui->settings_profile_w->setCurrentIndex(1);


    statusBar()->clearMessage();
    statusBar()->showMessage("Режим управления пока что не выбран");

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


void MainWindow::on_radioButton_setting_param_clicked()
{
    ui->settings_profile_w->setCurrentIndex(0);
}


void MainWindow::on_radioButton_setting_climat_clicked()
{
    ui->settings_profile_w->setCurrentIndex(1);
}


void MainWindow::on_pushButton_clicked()
{
    if (ui->radioButton_manual->isChecked())
    {
        statusBar()->clearMessage();
        statusBar()->showMessage("Ручной режим управления");
    }
    else if (ui->radioButton_param->isChecked())
    {
        statusBar()->clearMessage();
        statusBar()->showMessage("Режим поддержания параметров климата");
    }
    else
    {
        statusBar()->clearMessage();
        statusBar()->showMessage("Режим управления профилями климата");
    }
}

