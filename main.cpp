#include <iostream>
#include "Practice12/Circle.h"


int main() {
    Circle c;
    c.setXY(2,2);
    c.setR(4);
    Point p;
    p.setXY(8,8);
    std::cout << (c.contain(p) ?
                  "In the circle" :
                  "Out of the circle") << std::endl;
    return 0;
}