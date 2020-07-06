#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number whose factors to be calculated:"<<endl;
    cin>>a;
    cout<<"Factors of the given numbers are:"<<endl;
    for (int i = 1; i < a; i++)
    {
        if(a%i==0)
        {
            cout<<i<<"\t";
        }
    }
    return 0;
}