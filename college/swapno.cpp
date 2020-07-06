#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a number to be swaped:"<<endl;
    cin>>a>>b;
    cout<<"Numbers before swap="<<a<<","<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"Numbers after swap="<<a<<","<<b<<endl;
    return 0;
}