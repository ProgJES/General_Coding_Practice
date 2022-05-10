#ifndef _INHERITANCE_H_
#define _INHERITANCE_H_

#include <iostream>
#include <string>

using namespace std;

class PFigure
{
private:
    string color;

public:
    PFigure();
    void setColor(const string color);
    string getColor();
};

class Circle : public PFigure
{
private:
    double r, area;

public:
    Circle();
    void setR(const double r);
    double getArea();
};
#else
#endif