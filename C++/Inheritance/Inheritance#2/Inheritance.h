#ifndef _INHERITANCE_H_
#define _INHERITANCE_H_

#include <string>
#include <iostream>
using namespace std;

class StringCharArray : public string
{
public:
    void toCharArray(char *str);
};
#else
#endif