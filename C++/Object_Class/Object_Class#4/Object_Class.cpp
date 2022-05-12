#include "Object_Class#4.h"

/*GeometricObject Declaration*/
GeometricObject::GeometricObject()
{
    line1 = 0.0;
    line2 = 0.0;
}

GeometricObject::GeometricObject(const double line1, const double line2)
{
    this->line1 = line1;
    this->line2 = line2;
}

void GeometricObject::setLine1(const double line1)
{
    this->line1 = line1;
}
void GeometricObject::setLine2(const double line2)
{
    this->line2 = line2;
}

double GeometricObject::getLine1()
{
    return line1;
}
double GeometricObject::getLine2()
{
    return line2;
}

/*Isosceles declaration*/
Isosceles::Isosceles()
{
    area = 0.0;
    side = 0.0;
}
Isosceles::Isosceles(const double base, const double height) : GeometricObject(base, height)
{
    area = 0.0;
    side = 0.0;
}

double Isosceles::AreaCalculation()
{
    area = getLine1() * getLine2() * 0.5;
    return area;
}
double Isosceles::Compute()
{
    side = sqrt((getLine1() / 2) * (getLine1() / 2) + getLine2() * getLine2());
    return side;
}

double Isosceles::getArea()
{
    return area;
}
double Isosceles::getSide()
{
    return side;
}

/*Rectangle Declaration*/
Rectangle::Rectangle()
{
    area = 0.0;
    round = 0.0;
}
Rectangle::Rectangle(const double length, const double height) : GeometricObject(length, height)
{
    area = 0.0;
    round = 0.0;
}
double Rectangle::AreaCalculation()
{
    area = getLine1() * getLine2();
    return area;
}
double Rectangle::Compute()
{
    round = (getLine1() * 2) + (getLine2() * 2);
}

double Rectangle::getArea()
{
    return area;
}
double Rectangle::getRound()
{
    return round;
}