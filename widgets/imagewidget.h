#ifndef IMAGEWIDGET_H
#define IMAGEWIDGET_H

#include <QWidget>

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

    void setFrontImage(const QImage &value);

    void setImages(const QVector<QImage> &value);

private:
    Ui::ImageWidget *ui;
    void createPreviewElemnts(int numOfElemnts);
    QImage frontImage;
    QVector<QImage> images;

};

#endif // IMAGEWIDGET_H
