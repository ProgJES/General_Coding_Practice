#include "stack_practice.h"
#include "stack_template.h"

int main()
{
    Stack s;
    s.push(100);
    s.push(200);
    s.push(300);

    for (; !s.is_empty();)
        cout << s.pop() << " ";
    cout << endl;

    Stack_Template<string> strS;
    strS.push("Joseph");
    strS.push("John");
    strS.push("Susan");

    for (; !strS.is_empty();)
        cout << strS.pop() << " ";
    cout << endl;

    Stack_Template<double> douS;
    douS.push(1.25);
    douS.push(4.556);
    douS.push(112.3);

    for (; !douS.is_empty();)
        cout << douS.pop() << " ";
    cout << endl;

    return 0;
}