#include <iostream>
using namespace std;

class unary
{
    int x, y, z;

public:
    void getdata(int a, int b, int c);
    void display();
    void operator-();
};
void unary::display()
{
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
};
void unary::getdata(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
};
void unary::operator-()
{
    x = -x;
    y = -y;
    z = -z;
};
int main()
{
    unary u;
    u.getdata(10, -20, 30);
    cout << "Before Overloading: " << endl;
    u.display();
    -u;
    cout << "After Overloading: " << endl;
    u.display();
    return 0;
}