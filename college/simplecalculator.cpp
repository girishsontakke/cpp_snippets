#include <iostream>
using namespace std;
int main()
{
    char op;
    float a, b;

    cout << "Enter operands:" << endl;
    cin >> a >> b;
    cout << "Enter operator: " << endl;
    cin >> op;
    switch (op)
    {
    case '*':
        cout << "product of two numbers is " << a * b;
        break;
    case '+':
        cout << "sum of two numbers is " << a + b;
        break;
    case '-':
        cout << "difference of two numbers is " << a - b;
        break;
    case '/':
        cout << "ratio of two numbers is " << a / b;
        break;
    default:
        cout << "error";
        break;
    }
    return 0;
}