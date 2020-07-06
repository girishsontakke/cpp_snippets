#include<iostream>
using namespace std;
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    student s ;
    cout<<"Enter information:"<<endl;
    cout<<"Enter name: ";
    cin>>s.name;
    cout<<"Enter roll Number: ";
    cin>>s.roll;
    cout<<"Enter marks: ";
    cin>>s.marks;
    cout<<endl;
    cout<<"Display information:"<<endl;
    cout<<"Name:"<<s.name<<endl;
    cout<<"roll number:"<<s.roll<<endl;
    cout<<"Marks:"<<s.marks<<endl;
    return 0;
}
