#include "Inheritance.h"

int main()
{
    PFigure pf1;
    Circle c1;
    cout << c1.getColor() << endl;
    c1.setColor("white");
    cout << c1.getColor() << endl;
    return 0;
}