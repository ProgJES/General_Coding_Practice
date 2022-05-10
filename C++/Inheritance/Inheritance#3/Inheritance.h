#ifndef _INHERITANCE_H_
#define _INHERITANCE_H_

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

class Person
{
private:
    string name, addr, tel;

public:
    Person();
    Person(const string name, const string addr, const string tel);
    void setVal(const string name, const string addr, const string tel);
    string getName();
    string getAddr();
    string getGetPhoneNumber();
};
class Student : public Person
{
private:
    double score[3], total, average;
    int rank;

public:
    Student();
    Student(const string name, const string addr, const string tel, const double subject_1, const double subject_2, const double subject_3);
    void calculateTotal();
    void calculateAverage();
    void getScore(double *subjects);
    void setScore(const double *subjects);
    double getTotal();
    double getAverage();
};
#else
#endif