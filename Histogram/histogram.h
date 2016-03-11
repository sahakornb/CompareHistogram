#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include <QMainWindow>
#include <opencv2/opencv.hpp>
using namespace cv;
namespace Ui {
class Histogram;
}

class Histogram : public QMainWindow
{
    Q_OBJECT

public:
    explicit Histogram(QWidget *parent = 0);

private:
    Ui::Histogram *ui;
    Mat image;
    Mat gray_img;
};

#endif // HISTOGRAM_H
