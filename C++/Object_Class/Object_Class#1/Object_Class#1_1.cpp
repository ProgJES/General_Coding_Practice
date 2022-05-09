#include "Object_Class.h"

void Circle::setRadius(const double r)
{
    this->radius = r;
}
double Circle::getRadius()
{
    return radius;
}
double Circle::getArea()
{
    area = PI * radius * radius;
    return area;
}