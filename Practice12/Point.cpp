//
// Created by daubert on 18-5-19.
//

#include <cmath>
#include "Point.h"

void Point::setXY(int x, int y) {
    m_x = x;
    m_y = y;
}
int Point::getX() { return m_x; }
int Point::getY() { return m_y; }

double Point::distance(Point &anohter) {
    int d_x = m_x - anohter.m_x;
    int d_y = m_y - anohter.m_y;
    return sqrt(pow(d_x,2) + pow(d_y, 2));
}