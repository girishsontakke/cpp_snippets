#include <iostream>
#include <array>
#include <vector>

using namespace std;


int main() {
    int data[] = {1,2,3,4,5,6};
    // array<int, 6> data = {1,2,3,4,5,6};
    // vector<int> data = {1,2,3,4,5,6};
    for (int n : data)
    {
        cout << n << "\t";
    }
    cout << "" << endl;
    return 0;
}