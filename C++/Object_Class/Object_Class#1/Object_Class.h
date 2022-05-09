#ifndef _OBJECT_CLASS_H_
#define _OBJECT_CLASS_H_

#include <iostream>
using namespace std;
#define PI 3.141519

class Circle
{
private:
    double radius, area;

public:
    void setRadius(const double r);
    double getRadius();
    double getArea();
};
#else
#endif