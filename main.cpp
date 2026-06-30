#include <iostream>
using namespace std;
int main()
{

    int n1, n2;
    char op;
    cout << "=======================================" << endl;
    cout << "        Simple Calculator (C++)        " << endl;
    cout << "=======================================" << endl;

    cout << " Enter first number:";
    cin >> n1;

    cout << " Enter second number:";
    cin >>n2;

    cout << " Enter operator (+, -, *, /, %): ";
    cin >> op;

    switch (op)
    {
     case '+':
         cout << "Result = " << n1 + n2 << endl;
         break;
     case '-':
         cout << "Result = " << n1 - n2 << endl;
         break;
     case '*':
         cout << "Result = " << n1 * n2 << endl;
         break;
     case '/':
         if (n2 != 0)
         cout << "Result = " << (float) n1 / n2 << endl;
     else
         cout << "Error: Division by zero is not allowed " << endl;
         break;
     case '%':
         if (n2 !=0)
         cout << " Result = " << n1% n2 << endl;
         else
         cout << "Error: Modulo by zero is not allowed " << endl;
         break;
     default:
         cout << "Error: Invalid operator !" << endl;
    }
    cout << endl;
    cout << " Thank you for using the calculator. " << endl;
    return 0;
    }

