#include <iostream>
using namespace std;
int cp(int);
int main()
{
    int n;
    cout << "Enter any number: " << endl;
    cin >> n;
    if (cp(n) == 0)
        cout << "Given number is prime " << endl;
    else
        cout << "Given number is not prime " << endl;
}
int cp(int n)
{
    bool flag = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
