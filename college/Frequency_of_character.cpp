#include<iostream>
using namespace std;
int main()
{
    string str="C++ Programing is awesome";
    char checkcharacter='a';
    int count=0;
    for(int i=0;i<str.size();i++)
    {
        if (str[i]==checkcharacter)
        {
            ++count;
        }
    }
    cout<<"Number of "<<checkcharacter<<"="<<count;
    return 0;
}