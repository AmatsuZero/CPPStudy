//
// Created by daubert on 18-5-19.
//

#ifndef CPPSTUDY_CIRCLE_H
#define CPPSTUDY_CIRCLE_H

#include "Point.h"

class Circle {
public:
    void setCenter(Point &point);
    void setR(int r);
    bool contain(Point point);
    bool isIntersection(Circle &circle);
    ~Circle();
private:
    Point center;
    int m_r;
};


#endif //CPPSTUDY_CIRCLE_H
