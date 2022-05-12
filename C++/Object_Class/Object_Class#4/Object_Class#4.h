#ifndef _OBJECT_CLASS_H_
#define _OBJECT_CLASS_H_

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class GeometricObject
{
private:
    double line1, line2;

public:
    GeometricObject();
    GeometricObject(const double, const double);
    void setLine1(const double);
    void setLine2(const double);
    double getLine1();
    double getLine2();
    virtual double AreaCalculation() = 0;
    virtual double Compute() = 0;
};

class Isosceles : public GeometricObject
{
private:
    double area, side;

public:
    Isosceles();
    Isosceles(const double, const double);
    double AreaCalculation();
    double Compute();
    double getArea();
    double getSide();
};

class Rectangle : public GeometricObject
{
private:
    double area, round;

public:
    Rectangle();
    Rectangle(const double, const double);
    double AreaCalculation();
    double Compute();
    double getArea();
    double getRound();
};
#else
#endif