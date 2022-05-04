#ifndef _GRADE_H_
#define _GRADE_H_

#include <iostream>
#include <stdexcept> //Header file of logic_error
using namespace std;

class GradeException : public logic_error
{
private:
    int num, total;

public:
    GradeException(const int total, const int num);
    int Get_Total();
    int Get_Num();
};

class Grade
{
private:
    int sub_1, sub_2, sub_3, total;
    double aver;

public:
    Grade();
    Grade(const int sub_1, const int sub_2, const int sub_3);
    int Grade_Total();
    double Get_Average();
};

#else
#endif
