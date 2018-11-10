#include "imagewidget.h"
#include "ui_imagewidget.h"

#include <qgraphicsitem.h>

ImageWidget::ImageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ImageWidget)
{
    ui->setupUi(this);
}

ImageWidget::~ImageWidget()
{
    delete ui;
}

void ImageWidget::loadImages(QString baseAbsolutePath, QStringList imagesLocalPathes)
{
//    qDebug() << "Input list to load function"
    createPreviewElemnts(imagesLocalPathes.size());
}

void ImageWidget::createPreviewElemnts(int numOfElemnts)
{

}

void ImageWidget::setImages(const QVector<QPixmap> &value)
{
    pxMaps_ = value;

}

void ImageWidget::setFrontImage(QImage *img)
{
    frontImage_ = img;
    QGraphicsScene* scene = new QGraphicsScene();
    ui->main_photo_gv->setScene(scene);
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(*img));
    scene->addItem(item);
    ui->main_photo_gv->show();
}

void ImageWidget::on_fullscreen_toolbtn_clicked()
{
    QDialog *fsDialog = new QDialog();
    QGridLayout *layout = new QGridLayout();
    QLabel *label = new QLabel();
    QString imgPath = QFileDialog::getOpenFileName(this, tr("Open Image"), "/", tr("Image Files (*.png *.jpg *.bmp)"));
    QPixmap pixMap(imgPath);
    label->setPixmap(pixMap);
    layout->addWidget(label, 0, 0);
    fsDialog->setLayout(layout);
    fsDialog->showFullScreen();
}
