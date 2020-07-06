#include<iostream>
using namespace std;
class M 
{
    public:
    void display(void)
   {
    cout<<"class M="<<endl;
    }
};
class N 
{
    public:
    void display(void)
    {
        cout<<"class N="<<endl;
    }
} ;
class P:public M,public N
{
    public:
    void display(void)//this will overwrite the function defined in class M & N.
    {
        M::display();//this will call display function of class M
    }
};
int main()
{
    P p;
    p.display(); //this will call class P
    p.N::display();//this will call class N
    p.M::display();//this will call class M
    return 0;
}
