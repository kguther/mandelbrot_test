/*    This file is part of mandelbrot_test.

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
#include "mandelbrot.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mandelbrot w;
    w.show();

    return a.exec();
}
