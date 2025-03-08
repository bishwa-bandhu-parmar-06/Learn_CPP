// Data Hiding

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    int setlength(int l)
    {
        if (l >= 0)
        {
            length = l;
        }
        else
        {
            cout << "You Have Enter The length is less Than 0." << endl;
            return length = 0;
        }
    }
    int setbreadth(int b)
    {
        if (b >= 0)
        {
            breadth = b;
        }
        else
        {
            cout << "You have enter the breadth is less than the 0." << endl;
            return breadth = 0;
        }
    }

    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r;
    r.setlength(10);
    r.setbreadth(5);
    cout << "Your Length is : " << r.getlength() << endl;
    cout << "your Breadth is : " << r.getbreadth() << endl;
    cout << "Area of Rectangle is : " << r.area() << endl;
    cout << "Perimeter of Rectangle is : " << r.perimeter() << endl;
}