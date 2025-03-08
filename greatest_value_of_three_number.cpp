#include <iostream>
using namespace std;

int main()
{
    int firstnum;
    int secondnum;
    int thirdnum;
    cout << "Enter The Value For Firstnum: ";
    cin >> firstnum;
    cout << "Enter The Value For secondnum: ";
    cin >> secondnum;
    cout << "Enter The Value For thirdnum: ";
    cin >> thirdnum;
    if (firstnum > secondnum)
    {
        if (secondnum > thirdnum)
        {
            cout << "Greatest Number is : " << firstnum;
        }
    }
    else if (secondnum > thirdnum)
    {
        cout << "Greatest Number is : " << secondnum;
    }
    else
    {
        cout << "Greatest Number is : " << thirdnum;
    }
    return 0;
}