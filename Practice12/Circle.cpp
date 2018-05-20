//
// Created by daubert on 18-5-19.
//

#include <iostream>
#include "Circle.h"

void Circle::setCenter(Point &point) {
    center = point;
}

void Circle::setR(int r) {
    m_r = r;
}

bool Circle::contain(Point point) {
    int dd = (point.getX() - center.getX()) + (point.getY() - center.getY());
    return dd <= m_r * m_r;
}

bool Circle::isIntersection(Circle &another) {
    int rr = m_r + another.m_r;
    return rr >= center.distance(another.center);
}

Circle::~Circle() {
    std::cout << "Destruct" << std::endl;
}