#include "grade.h"

GradeException::GradeException(const int total, const int num) : logic_error("Wrong argument!")
{
    this->total = total;
    this->num = num;
}
int GradeException::Get_Total()
{
    return total;
}
int GradeException::Get_Num()
{
    return num;
}

Grade::Grade()
{
    this->sub_1 = 0;
    this->sub_2 = 0;
    this->sub_3 = 0;
    this->total = 0;
    this->aver = 0.0;
}

Grade::Grade(const int sub_1, const int sub_2, const int sub_3)
{
    this->sub_1 = sub_1;
    this->sub_2 = sub_2;
    this->sub_3 = sub_3;
    this->total = 0;
    this->aver = 0.0;
}

int Grade::Grade_Total()
{
    if (sub_1 < 0 || sub_2 < 0 || sub_3 < 0)
        throw GradeException(total, 3);
    total = sub_1 + sub_2 + sub_3;

    return total;
}

double Grade::Get_Average()
{
    if (total < 0)
        throw GradeException(total, 3);
    aver = total / (double)3;

    return aver;
}