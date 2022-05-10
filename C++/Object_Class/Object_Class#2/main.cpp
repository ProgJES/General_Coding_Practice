#include "Object_Class#2.h"

int main()
{
    Person p1;
    p1.setAge(15);
    p1.setName("John");

    // Copy obj
    Person p2(p1);

    // Pointer obj
    Person *pp = new Person("James", 35);

    Test(p1);
    cout << "p1.name: " << p1.getName() << ", p1.age: " << p1.getAge() << endl;
    cout << "p2.name: " << p2.getName() << ", p2.age: " << p2.getAge() << endl;
    cout << "pp.name: " << pp->getName() << ", pp.age: " << pp->getAge() << endl;
    delete (pp);

    return 0;
}
