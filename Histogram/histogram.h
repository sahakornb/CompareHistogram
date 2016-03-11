#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include <QMainWindow>

namespace Ui {
class Histogram;
}

class Histogram : public QMainWindow
{
    Q_OBJECT

public:
    explicit Histogram(QWidget *parent = 0);
    ~Histogram();

private:
    Ui::Histogram *ui;
};

#endif // HISTOGRAM_H
