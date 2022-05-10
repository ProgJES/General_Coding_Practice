#include "Inheritance.h"

PFigure::PFigure()
{
    this->color = "black";
    cout << "PFigure Constructor" << endl;
}
string PFigure::getColor()
{
    cout << "PFigure getColor" << endl;
    return this->color;
}
void PFigure::setColor(const string color)
{
    cout << "PFigure getColor" << endl;
    this->color = color;
}

Circle::Circle()
{
    this->area = 0.0;
    this->r = 0.0;
    cout << "Circle Constructor" << endl;
}
double Circle::getArea()
{
    cout << "Circle getArea" << endl;
    this->area = 3.14 * r * r;
    return area;
}
void Circle::setR(const double r)
{
    cout << "Circle setR" << endl;
    this->r = r;
}
