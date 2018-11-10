#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_actionOpen_image_triggered()
{
    QString imagePath = QFileDialog::getOpenFileName(this, tr("Open Image"), "/", tr("Image Files (*.png *.jpg *.bmp)"));
    ui->pathLe->setText(imagePath);
    QImage *i = new QImage(imagePath);
    setImg(i);
    ui->imgWidget->setFrontImage(i);
}

void MainWindow::setImg(QImage *img)
{
    img_ = img;
}
