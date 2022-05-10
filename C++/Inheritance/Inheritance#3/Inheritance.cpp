#include "Inheritance.h"

Person::Person()
{
    name = "";
    addr = "";
    tel = "";
}
Person::Person(const string name, const string addr, const string tel)
{
    this->name = name;
    this->addr = addr;
    this->tel = tel;
}
void Person::setVal(const string name, const string addr, const string tel)
{
    this->name = name;
    this->addr = addr;
    this->tel = tel;
}
string Person::getAddr()
{
    return addr;
}
string Person::getName()
{
    return name;
}
string Person::getGetPhoneNumber()
{
    return tel;
}

Student::Student()
{
    rank = 0;
    total = 0.0;
    average = 0.0;
    fill_n(score, 3, 0);
}
Student::Student(const string name, const string addr, const string tel, const double subject_1, const double subject_2, const double subject_3) : Person(name, addr, tel)
{
    this->score[0] = subject_1;
    this->score[1] = subject_2;
    this->score[2] = subject_3;
}
void Student::calculateAverage()
{
    this->average = total / (sizeof(score) / sizeof(*score));
}
void Student::calculateTotal()
{
    total = 0;
    for (int i = 0; i < sizeof(score) / sizeof(*score); i++)
    {
        total += score[i];
    }
}
void Student::setScore(const double *subjects)
{
    for (int i = 0; i < (sizeof(score) / sizeof(*score)); i++)
    {
        this->score[i] = *(subjects + i);
    }
}
void Student::getScore(double *subjects)
{
    for (int i = 0; i < (sizeof(score) / sizeof(*score)); i++)
    {
        subjects[i] = this->score[i];
    }
}
double Student::getTotal()
{
    return total;
}
double Student::getAverage()
{
    return average;
}
