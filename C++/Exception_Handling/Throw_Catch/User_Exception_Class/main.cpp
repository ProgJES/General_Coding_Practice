#include "grade.h"

int main()
{

    try
    {
        Grade g1(10, 20, -30);
        cout << "Total: " << g1.Grade_Total() << endl;
        cout << "Average: " << g1.Get_Average() << endl;
    }
    catch (GradeException &e)
    {
        cout << e.what() << endl;
        cout << "Error Total: " << e.Get_Total() << endl;
        cout << "Error Num: " << e.Get_Num() << endl;
    }

    return 0;
}