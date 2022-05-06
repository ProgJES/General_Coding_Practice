#include "stack_practice.h"

Stack::Stack()
{
    this->top = -1;
}
Stack::~Stack()
{
}
bool Stack::is_full()
{
    if (top == MAX_ARRAY - 1)
        return true;
    return false;
}
bool Stack::is_empty()
{
    if (top == -1)
        return true;
    return false;
}
bool Stack::push(const int value)
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
int Stack::pop()
{
    int last_value = stack[top];

    top--;
    return last_value;
}