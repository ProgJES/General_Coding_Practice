#ifndef _STACK_PRACTICE_H_
#define _STACK_PRACTICE_H_

#include <iostream>
#include <algorithm>
#define MAX_ARRAY 100
using namespace std;

class Stack
{
private:
    int stack[MAX_ARRAY];
    int top;

public:
    Stack();
    ~Stack();
    bool is_full();
    bool is_empty();
    bool push(const int);
    int pop();
};

#else
#endif