#ifndef _OBJECT_CLASS_H_
#define _OBJECT_CLASS_H_

#define MAX 50

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Source_Score
{
protected:
    int score[MAX];
    string name[MAX];
    int num;

public:
    void setName(string name[], const int num);
    void setScore(const int score[], const int num);
};

class Grade_Rank
{
protected:
    int num;
    char grade[MAX];
    int rank[MAX];

public:
    int setGrade(const int score[], const int num);
    int setRank(const int score[], const int num);
};

class Grade : public Source_Score, public Grade_Rank
{
private:
    int orderScore[MAX];
    string orderName[MAX];

public:
    int getScore(const int index);
    string getName(const int index);

    int orderOnScore();
    int displayGraph(const int index);
    int getRank(const int index);
    int getOrderScore(const int index);
    string getOrderName(const int index);
};

#else
#endif