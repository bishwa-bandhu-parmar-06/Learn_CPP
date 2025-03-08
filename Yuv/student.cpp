#include <iostream>
using namespace std;
class student
{
    long mobNo;
    int getbal()
    {
        return 10000;
    }

public:
    string name;
    int age;
    int roll;
    void study()
    {
        cout << "Studying\n";
    }
    student()
    {
    }
    student(string n, int x, int y, long z)
    {
        name = n;
        age = x;
        roll = y;
        mobNo = z;
    }
    long getPhone()
    {
        return mobNo;
    }
    int checkbal()
    {
        return getbal();
    }
};
int main()
{
    student s1("Yuvraj", 20, 29, 1234567890);

    cout << s1.getPhone() << " is my moblie" << endl;
    cout << s1.checkbal();
    s1.study();
}
