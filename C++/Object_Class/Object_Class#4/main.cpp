#include "Object_Class#4.h"

void DisplayGeometicObject(GeometricObject &obj)
{
    cout << "line1: " << obj.getLine1() << endl;
    cout << "line2: " << obj.getLine2() << endl;

    GeometricObject *gp = &obj;

    cout << "Up-Casting line1: " << gp->getLine1() << endl;
    cout << "Up-Casting line2: " << gp->getLine2() << endl;

    Isosceles *sp = dynamic_cast<Isosceles *>(gp);
    Rectangle *rp = dynamic_cast<Rectangle *>(gp);

    if (sp != NULL)
    {
        cout << "Down-Casting Area: " << sp->AreaCalculation() << endl;
        cout << "Down-Casting Side: " << sp->Compute() << endl;
    }
    if (rp != NULL)
    {
        cout << "Down-Casting Area: " << rp->getArea() << endl;
        cout << "Down-Casting Round: " << rp->getRound() << endl;
    }
};

int main()
{
    Isosceles Tri(4.2, 5.4);
    cout << "Base: " << Tri.getLine1() << endl;
    cout << "Height: " << Tri.getLine2() << endl;
    cout << "Area: " << Tri.AreaCalculation() << endl;
    cout << "Side: " << Tri.Compute() << endl;

    Rectangle Rect;
    Rect.setLine1(10);
    Rect.setLine2(20);

    Rect.AreaCalculation();
    Rect.Compute();

    cout << "Length: " << Rect.getLine1() << endl;
    cout << "Height: " << Rect.getLine2() << endl;
    cout << "Area: " << Rect.getArea() << endl;
    cout << "Round: " << Rect.getRound() << endl;

    GeometricObject *p1 = new Isosceles(4.1, 5.9);
    cout << "Upcasting" << p1->getLine1() << endl;
    cout << "Upcasting" << p1->getLine2() << endl;

    DisplayGeometicObject(Tri);
    DisplayGeometicObject(Rect);
    return 0;
}