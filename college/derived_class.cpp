#include <iostream>
using namespace std;
class B
{
    int a;

public:
    int b;
    void set_ab();
    int get_a();
    void show_ab();
};
class D : public B
{
    int c;

public:
    void mul(void);
    void display(void);
};
void B::set_ab()
{
    cout << "put the values of a and b: \n";
    cin >> a >> b;
}
int B::get_a(void)
{
    return a;
}
void B::show_ab()
{
    cout << "a= " << a << endl;
}
void D::mul(void)
{
    c = b * get_a();
}
void D::display(void)
{
    cout << "a=" << get_a() << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;
}
int main()
{
    D d;
    d.set_ab();
    d.show_ab();
    d.mul();
    d.display();
    d.b = 20;
    d.mul();
    d.display();
    return 0;
}