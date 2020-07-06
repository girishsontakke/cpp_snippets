#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter dividend and divisor:"<<endl;
    cin>>a>>b;
    c=a/b;
    d=a%b;
    cout<<"quotient="<<c;
    cout<<"\n remainder="<<d;
    return 0;
}