#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "MyFileWork.h"
 #include <QFileDialog>

#include <iostream>        //cout
#include <stdio.h>         //printf
#include <string.h>         //strlen

#include <fstream>
#include <iostream>

using namespace std;

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
    ui->label->setText("HELLLO");
    int babax =100;
    ui->progressBar->setValue(babax);

}



void MainWindow::on_progressBar_valueChanged(int value)
{

}

void MainWindow::on_progressBar_windowIconChanged(const QIcon &icon)
{

}

void MainWindow::on_pushButton_2_clicked()
{

   // string st("test");
    // write_data_to_log(1,"GGGG",&st);

   // read_data_from_a_file("pix.jpg");

   // ui->label->setText(tr("Select an image file"));
         QString fileName = QFileDialog::getOpenFileName(0, QString(), QString(),
                                             tr("Images (*.png *.xpm *.jpg)"));
         QImage image;
         if (!image.load(fileName)) {
             ui->label->setText(tr("Selected file is not an image, please select another."));
             return;
         }
         ui->label_pic->setPixmap(QPixmap::fromImage(image));

   // QPixmap pix("pic.jpg");
  //  ui->label_pic->setPixmap(pix);

}

void MainWindow::on_pushButton_3_clicked()
{
    QString txt1;
    std::string txt;
   txt1= ui->lineEdit_captch->text();
   ui->label_textc->setText(txt1);



}
