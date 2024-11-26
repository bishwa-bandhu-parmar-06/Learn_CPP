// Parametrized Constructor in CPP

#include <iostream>
using namespace std;
class car
{
public:
    string brand;
    string modelNo;
    int year;

    car(string b, string mn, int y)
    {
        brand = b;
        modelNo = mn;
        year = y;
    }
};

int main()
{

    string brand;
    cout << "Enter the Brand Of your Car : " << endl;
    cin >> brand;

    int year;
    cout << "Enter the Year when You have Purchased : " << endl;
    cin >> year;

    string model;
    cout << "Enter the Model Of Your Car : " << endl;
    cin >> model;

    car carobject1(brand, model, year);
    cout << "Enter the Brand Of your Car : " << carobject1.brand << endl;
    return 0;
}