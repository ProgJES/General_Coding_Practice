#ifndef _STACK_TEMPLATE_H_
#define _STACK_TEMPLATE_H_

#include <iostream>
#include <algorithm>
#define MAX_ARRAY 100
using namespace std;

template <typename T>
class Stack_Template
{
private:
    T stack[MAX_ARRAY];
    int top;

public:
    Stack_Template();
    Stack_Template(const T);
    ~Stack_Template();
    bool is_full();
    bool is_empty();
    bool push(const T);
    T pop();
};
template <typename T>
Stack_Template<T>::Stack_Template()
{
    this->top = -1;
}
template <typename T>
Stack_Template<T>::~Stack_Template()
{
    cout << "Desc.." << endl;
}
template <typename T>
Stack_Template<T>::Stack_Template(const T value)
{
    this->top++;
    stack[top] = value;
}

template <typename T>
bool Stack_Template<T>::push(const T value)
{
    if (!is_full())
    {
        top++;
        stack[top] = value;
        return true;
    }
    else
    {
        return false;
    }
}

template <typename T>
T Stack_Template<T>::pop()
{
    T element = stack[top];
    top--;

    return element;
}

template <typename T>
bool Stack_Template<T>::is_full()
{
    if (top == MAX_ARRAY - 1)
        return true;
    return false;
}
template <typename T>
bool Stack_Template<T>::is_empty()
{
    if (top == -1)
        return true;
    return false;
}

#else
#endif