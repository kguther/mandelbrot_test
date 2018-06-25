/*
    This file is part of mandelbrot_test.

    mandelbrot_test is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    mandelbrot_test is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with mandelbrot_test.  If not, see <https://www.gnu.org/licenses/>.
*/
#ifndef MANDELBROT_H
#define MANDELBROT_H

#include <QWidget>
#include <vector>
#include "QColor"

namespace Ui {
class mandelbrot;
}

class mandelbrot : public QWidget
{
    Q_OBJECT

public:
    explicit mandelbrot(QWidget *parent = 0);
    ~mandelbrot();

private slots:
    void on_refresh_clicked();
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void on_zoom_in_clicked();
    void on_zoom_out_clicked();

private:
    Ui::mandelbrot *ui;
    void setboundary(double a, double b, double c, double d);
    QColor smoothcol(double col);
    QColor palette(int i);
    void getMandelbrotData();
    void setZoom(double x, double y, double *target);
    double boundary[4];
    double zoom[4];
    int w,h, resx, resy;
    double ref;
    std::vector<int> xCoords, yCoords;
    std::vector<QColor> colors;
    int newData, drawFocus;

protected:
    void paintEvent(QPaintEvent *);
};

#endif // MANDELBROT_H
