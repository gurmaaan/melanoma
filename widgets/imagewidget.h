#ifndef IMAGEWIDGET_H
#define IMAGEWIDGET_H

#include <QWidget>
#include <QDialog>
#include <QLabel>
#include <QLayout>
#include <QFileDialog>

namespace Ui {
class ImageWidget;
}

class ImageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ImageWidget(QWidget *parent = nullptr);
    ~ImageWidget();
    void loadImages(QString baseAbsolutePath, QStringList imagesLocalPathes);

    void setFrontImage(QImage *img);

    void setImages(const QVector<QPixmap> &value);

private slots:
    void on_fullscreen_toolbtn_clicked();

private:
    Ui::ImageWidget *ui;
    void createPreviewElemnts(int numOfElemnts);
    QImage* frontImage_;
    QVector<QPixmap> pxMaps_;
};

#endif // IMAGEWIDGET_H
