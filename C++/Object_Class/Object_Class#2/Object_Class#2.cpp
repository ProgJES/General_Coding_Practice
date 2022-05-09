#include "Object_Class#2.h"

Person::Person()
{
    this->name = "";
    this->age = 0;
}
Person::Person(const string name = "", const int age = 1)
{
    this->name = name;
    this->age = age;
}
Person::~Person()
{
    cout << "destructor called!" << endl;
}
void Person::setAge(const int age)
{
    this->age = age;
}
void Person::setName(const string name)
{
    this->name = name;
}
int Person::getAge()
{
    return this->age;
}
string Person::getName()
{
    return this->name;
}

void Test(Person &p)
{
    p.setAge(20);
    p.setName("TestName");
}