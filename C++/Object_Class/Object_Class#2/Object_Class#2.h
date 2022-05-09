#ifndef _OBJECT_CLASS_H_
#define _OBJECT_CLASS_H_

#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    int age;
    string name;

public:
    Person();
    Person(const string name, const int age);
    ~Person();
    void setAge(const int);
    void setName(const string);
    int getAge();
    string getName();

    friend void Test(Person &);
};
#else
#endif