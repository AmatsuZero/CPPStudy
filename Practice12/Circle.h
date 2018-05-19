//
// Created by daubert on 18-5-19.
//

#ifndef CPPSTUDY_CIRCLE_H
#define CPPSTUDY_CIRCLE_H

#include "Point.h"

class Circle {
public:
    void setXY(int x, int y);
    void setR(int r);
    bool contain(Point point);
private:
    int x0;
    int y0;
    int m_r;
};


#endif //CPPSTUDY_CIRCLE_H
