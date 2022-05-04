#include <iostream>
using namespace std;
double average(const int total, const int num)
{
    if (total < 0 || num == 0)
        throw num;
    return total / (double)num;
}
int sum(const int score_1, const int score_2, const int score_3)
{
    if (score_1 < 0 || score_2 < 0 || score_3 < 0)
        throw 3;

    return score_1 + score_2 + score_3;
}
int main()
{
    int eng = 100, math = 98, sci = 80;
    int total = 0;
    double aver = 0.0;

    try
    {
        total = sum(eng, math, sci);
        cout << "Total: " << total << endl;
    }
    catch (int i)
    {
        cout << i << "Subject's score must be higher than 0!" << endl;
    }

    try
    {
        aver = average(total, 3);
        cout << "Average: " << aver << endl;
    }
    catch (int n)
    {
        cout << "Subject must be higher than " << n << endl;
    }
    return 0;
}