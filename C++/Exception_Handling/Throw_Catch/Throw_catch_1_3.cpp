#include <iostream>
#pragma warning(disable : 4290)
using namespace std;

int Total(const int sub_1, const int sub_2, const int sub_3) throw(char *);
double Average(const int total, int num) throw(char *);

int main()
{
    int eng = -100, math = 90, sci = 75;
    int total = 0;
    double aver = 0.0;

    try
    {
        total = Total(eng, math, sci);
        aver = Average(total, 3);

        cout << "Total: " << total << endl;
        cout << "Average: " << aver << endl;
    }
    catch (char *msg)
    {
        cout << msg << endl;
    }

    return 0;
}

int Total(const int sub_1, const int sub_2, const int sub_3) throw(char *)
{
    if (sub_1 < 0 || sub_2 < 0 || sub_3 < 0)
        throw "Subject's score must be higher than 0!";

    return sub_1 + sub_2 + sub_3;
}
double Average(const int total, int num) throw(char *)
{
    if (total < 0 || num <= 0)
        throw "Average - Wrong Argument!";
    return total / (double)num;
}