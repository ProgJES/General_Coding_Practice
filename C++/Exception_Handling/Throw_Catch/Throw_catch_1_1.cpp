#include <iostream>
using namespace std;

int main()
{
    int number1, number2;
    int quotient, reminder;

    cout << "ENTER NUMBER-1: ";
    cin >> number1;

    cout << "ENTER NUMBER-2: ";
    cin >> number2;

    try
    {
        if (number2 == 0)
            throw number1;

        quotient = number1 / number2;
        reminder = number1 % number2;

        cout << "Quotient: " << quotient << endl;
        cout << "reminder: " << reminder << endl;
    }
    catch (int e_num)
    {
        cout << e_num << " cannot be divided with 0!" << endl;
    }

    return 0;
}