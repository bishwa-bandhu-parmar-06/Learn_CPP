#include <iostream>
using namespace std;

// Class definition for complex numbers
class complex
{
    float x; // Real part
    float y; // Imaginary part

public:
    complex(){};                    // Default constructor
    complex(float real, float imag) // Parameterized constructor
    {
        x = real;
        y = imag;
    };
    complex operator+(complex); // Overloaded addition operator
    void display();             // Member function to display complex number
};

// Overloaded addition operator function
complex complex::operator+(complex c)
{
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return temp;
}

// Member function to display complex number
void complex::display()
{
    cout << x << " + j" << y << endl;
}

// Main function where the program starts execution
int main()
{
    complex c1, c2, c3;     // Declaration of three complex number objects
    c1 = complex(2.5, 3.5); // Initialization of c1 with real=2.5, imag=3.5
    c2 = complex(1.6, 2.7); // Initialization of c2 with real=1.6, imag=2.7
    c3 = c1 + c2;           // Addition of c1 and c2 using overloaded + operator, result stored in c3
    c1.display();           // Displaying c1
    c2.display();           // Displaying c2
    c3.display();           // Displaying c3, which is the sum of c1 and c2

    return 0; // Indicates successful program execution
}
