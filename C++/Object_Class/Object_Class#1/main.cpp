#include "Object_Class.h"

int main()
{
    Circle c;
    c.setRadius(10.2);
    cout << "Area: " << c.getArea() << ", Radius: " << c.getRadius() << endl;
    return 0;
}