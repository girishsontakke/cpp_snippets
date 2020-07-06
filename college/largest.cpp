#include <iostream>
using namespace std;
class set
{
    int m;
    int n;

public:
    void setdata(void);
    void display(void);
    int largest(void);
};
int set::largest(void)
{
    if (m >= n)
        return (m);
    else
        return (n);
}
void set::setdata(void)
{
    cout << "Input values of m & n:" << endl;
    cin >> m >> n;
}
void set::display(void)
{
    cout << "Largest value is:" << largest() << "\n";
}
int main()
{
    set A;
    A.setdata();
    A.display();
    return 0;
}
