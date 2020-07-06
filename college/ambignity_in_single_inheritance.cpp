#include<iostream>
using namespace std;
class A
{
    public:
    void display(void)
    {
        cout<<"A"<<endl;
    }
};
class B:public A
{
    public:
    void display (void)
    {
        cout<<"B"<<endl;
    }
};
int main()
{
    B b;
    b.display(); //class B will be called
    b.A::display();//class A will be called
    b.B::display();//class B will be called
    return 0;
}