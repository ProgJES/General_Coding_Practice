#include <iostream>
#include <fstream>
#include <string>
#define MAX 50
using namespace std;
typedef struct _OneStudent
{
    string name;
    int score[3], sum;
    double average;
} OneStudent;

int main()
{
    string fn = "grade.txt";
    int i = 0, len = 0;
    OneStudent OneLine[MAX];
    fstream fp;
    string temp;

    fp.open(fn, ios::in);
    if (fp.fail())
    {
        cout << "ERROR!" << endl;
        return 0;
    }

    while (!fp.eof())
    {
        fp >> OneLine[i].name >> OneLine[i].score[0] >> OneLine[i].score[1] >> OneLine[i].score[2];
        i++;
    }

    fp.close();

    len = i - 1;
    for (i = 0; i < len; i++)
    {
        OneLine[i].sum = OneLine[i].score[0] + OneLine[i].score[1] + OneLine[i].score[2];
        OneLine[i].average = OneLine[i].sum / 3.0;
        cout << OneLine[i].name << ", " << OneLine[i].score[0] << ", " << OneLine[i].score[1] << ", " << OneLine[i].score[2] << ", " << OneLine[i].sum << ", " << OneLine[i].average << endl;
    }
    return 0;
}