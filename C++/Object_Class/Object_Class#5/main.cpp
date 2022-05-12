#include "Object_Class#5.h"

int main()
{
    Grade student;
    string name[5] = {"Michael", "Maroon", "Dalbong", "Simpson", "Macho"};
    int score[5] = {95, 100, 25, 45, 65};
    int i = 0;

    // Source_Score
    student.setName(name, 5);
    student.setScore(score, 5);

    // Grade Rank
    student.setRank(score, 5);
    student.setGrade(score, 5);

    cout << "Before sorting.." << endl;

    for (i = 0; i < 5; i++)
    {
        cout << setw(10) << left << student.getName(i) << " " << setw(4) << student.getScore(i) << student.getRank(i) << endl;
    }

    cout << endl;

    student.orderOnScore();

    cout << "After Sorting... " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << setw(10) << left << student.getOrderName(i) << " " << setw(3) << student.getOrderScore(i) << " ";
        cout << "  " << student.displayGraph(i) << " " << endl;
    }
    return 0;
}