#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int guesses[20]; //array of size 20
    vector<int> data = {1, 2, 3};
    data.push_back(12);
    cout << data[3] << endl;
    data.pop_back();
    cout << data.size() << endl;
    cout << data.front() << endl;
    cout << data.back() << endl;
    cout << data[0];

    return 0;
}