#include <iostream>
using namespace std;
int main()
{
    int i, n;
    float num[100], sum = 0.0, average;
    cout << "Enter a number of data:";
    cin >> n;
    while (n > 100 || n <= 0)
    {
        cout << "Error! Entered number is out of range." << endl;
        cout << "Enter the valid number:" << endl;
        cin >> n;
    }
    for (i = 0; i < n; i++)
    {
        cout << i + 1 << ". Enter number:";
        cin >> num[i];
        sum = sum + num[i];
    }
    average = sum / n;
    cout << "Average=" << average;
    return 0;
}