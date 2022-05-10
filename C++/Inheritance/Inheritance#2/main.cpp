#include "Inheritance.h"

int main()
{
    StringCharArray one;
    char t_char[50];
    one.assign("sample");
    one.toCharArray(t_char);
    cout << one << endl;
    cout << t_char << endl;
    return 0;
}