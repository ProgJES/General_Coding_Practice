#include <iostream>
#include <exception>
#include <typeinfo>
using namespace std;
int printAstrisk(const int score)
{
    int count = 0;
    if (score < 0)
        throw std::invalid_argument("invalid argument entered!");
    for (count; count < score / 10; count++)
    {
        cout << "*" << endl;
    }
    return count;
}
int main()
{
    int score = 0, count = 0;
    cout << "Enter Score: ";
    cin >> score;

    try
    {
        count = printAstrisk(score);
        cout << "Astrisk count: " << count << endl;
    }
    catch (const std::exception &e)
    {
        cerr << e.what() << endl;
        cerr << typeid(e).name() << endl;
        return -1;
    }

    return 0;
}
