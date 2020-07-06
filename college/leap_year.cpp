#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the year:" << endl;
    cin >> n;
    if (n % 4==0)
    {
        if (n % 100==0)
        {
            if (n % 400==0)
                cout << "Entered year is leap year" << endl;
            else
                cout << "Entered year is not a leap year" << endl;
        }
        else
            cout << "Entered year is leap year" << endl;
    }
    else
        cout << "Entered year is not a leap year" << endl;
    return 0;
}