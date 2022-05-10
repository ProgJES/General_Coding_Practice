#include "Inheritance.h"

int main()
{
    string name, addr, tel;
    double subjects[3];
    fstream fs;

    Student student_1;

    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter address: ";
    getline(cin, addr);
    cout << "Enter tel: ";
    getline(cin, tel);

    int i = 0;
    while (i < (sizeof(subjects) / sizeof(*subjects)))
    {
        cout << "Enter score for subject[" << i << "]: ";
        cin >> subjects[i];
        i++;
    }

    student_1.setVal(name, addr, tel);
    student_1.setScore(subjects);
    student_1.calculateTotal();
    student_1.calculateAverage();

    Student student_2("Jason", "Canada", "416-111-1111", 100, 90, 70);
    student_2.calculateTotal();
    student_2.calculateAverage();

    fs.open("data.txt", ios::out | ios::trunc);
    if (fs.fail())
        return 0;

    student_1.getScore(subjects);

    fs << student_1.getName() << " " << student_1.getAddr() << " " << student_1.getGetPhoneNumber() << " "
       << subjects[0] << " " << subjects[1] << " " << subjects[2] << " " << student_1.getTotal() << " " << student_1.getAverage() << endl;

    student_2.getScore(subjects);
    fs << student_2.getName() << " " << student_2.getAddr() << " " << student_2.getGetPhoneNumber() << " "
       << subjects[0] << " " << subjects[1] << " " << subjects[2] << " " << student_2.getTotal() << " " << student_2.getAverage() << endl;
    return 0;
}