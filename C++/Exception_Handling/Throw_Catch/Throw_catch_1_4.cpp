#include <iostream>
#include <exception>
using namespace std;

int main()
{
    try
    {
        for (int i = 1; i <= 100; i++)
        {
            new int[70000000];
            cout << "#" << i << " array created" << endl;
        }
    }
    catch (bad_alloc &e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}