//
// Created by daubert on 18-5-19.
//

#include "Circle.h"

void Circle::setXY(int x, int y) {
    x0 = x;
    y0 = y;
}
void Circle::setR(int r) {
    m_r = r;
}
bool Circle::contain(Point point) {
    int dd = (point.getX() - x0) + (point.getY() - y0);
    return dd <= m_r * m_r;

}