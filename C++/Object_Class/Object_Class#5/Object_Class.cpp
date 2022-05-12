#include "Object_Class#5.h"

void Source_Score::setName(string name[], const int num)
{
    this->num = num;
    for (int i = 0; i < num; i++)
    {
        this->name[i] = name[i];
    }
}
void Source_Score::setScore(const int score[], const int num)
{
    this->num = num;
    for (int i = 0; i < num; i++)
    {
        this->score[i] = score[i];
    }
}

int Grade_Rank::setGrade(const int score[], const int num)
{
    int i = 0;
    if (num < 0)
        return 0;
    for (i; i < num; i++)
    {
        if (score[i] > 100 || score[i] < 0)
            return 0;
        switch (score[i] / 10)
        {
        case 10:
        case 9:
            grade[i] = 'A';
            break;
        case 8:
            grade[i] = 'B';
            break;
        case 7:
            grade[i] = 'C';
            break;
        case 6:
            grade[i] = 'D';
            break;
        default:
            grade[i] = 'F';
            break;
        }
    }
    return 1;
}
int Grade_Rank::setRank(const int score[], const int num)
{
    int i = 0, j = 0;
    if (num < 0)
        return 0;
    for (i; i < num; i++)
    {
        rank[i] = 1;
    }
    for (i = 0; i < num - 1; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (score[i] > score[j])
                rank[j]++;
            else if (score[i] < score[j])
                rank[i]++;
            else
                ;
        }
    }
    return 1;
}

int Grade::getScore(const int index)
{
    if (index >= Source_Score::num || index < 0)
        return 0;
    return Source_Score::score[index];
}

string Grade::getName(const int index)
{
    if (index >= Source_Score::num || index < 0)
        return 0;
    return Source_Score::name[index];
}

int Grade::orderOnScore()
{
    int i = 0, j = 0, temp = 0, tempRank = 0;

    if (Source_Score::num <= 0)
        return 0;

    // set initial values to the member variables
    for (i; i < Source_Score::num; i++)
    {
        orderName[i] = Source_Score::name[i];
        orderScore[i] = Source_Score::score[i];
    }
    for (i = 0; i < Source_Score::num - 1; i++)
    {
        for (j = i + 1; j < Source_Score::num; j++)
        {
            if (orderScore[i] < orderScore[j])
            {
                temp = orderScore[i];
                orderScore[i] = orderScore[j];
                orderScore[j] = temp;

                orderName[i].swap(orderName[j]);
            }
        }
    }
    return 1;
}

int Grade::displayGraph(const int index)
{
    int i = 0, j = 0;
    if (index >= Source_Score::num)
        return 0;
    i = orderScore[index] / 10;
    for (j; j < i; j++)
    {
        cout << "*";
    }
    Grade_Rank::setRank(orderScore, Source_Score::num);

    return Grade_Rank::rank[index];
}

int Grade::getRank(const int index)
{
    if (index >= Source_Score::num)
        return 0;

    return Grade_Rank::rank[index];
}

int Grade::getOrderScore(const int index)
{
    if (index >= Source_Score::num)
        return 0;

    return orderScore[index];
}

string Grade::getOrderName(const int index)
{
    if (index >= Source_Score::num)
        return 0;

    return orderName[index];
}