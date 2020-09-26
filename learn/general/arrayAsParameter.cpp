#include<bits/stdc++.h>
using namespace std;

// arrays are passed by address and can'nt be passed by value
void fun(int arr[], int n){
    arr[0] = 3;

}

int main(){
    int A[5]={1,2,3,4,5};
    fun(A,5);
    for(auto x: A){
        cout << x << endl;
    }

}