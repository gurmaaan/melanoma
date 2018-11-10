#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setImg(QImage *img);

private slots:
    void on_actionOpen_image_triggered();

private:
    Ui::MainWindow *ui;
    QImage *img_;
};

#endif // MAINWINDOW_H
