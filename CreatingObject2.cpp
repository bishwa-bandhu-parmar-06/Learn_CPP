// accessing an object using pointer

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;
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
    Rectangle *ptr;
    ptr = &r;
    ptr->length = 10;
    ptr->breadth = 50;
    cout << "Area Of Reactangle is : " << ptr->area() << endl;
    cout << "Perimeter of Rectangle is : " << ptr->perimeter() << endl;
}
