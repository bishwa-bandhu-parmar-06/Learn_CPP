#include <iostream>
using namespace std;

int main()
{
    int a = 32;
    int *p = &a;
    char ch = 'A';
    char &chref = ch;
    chref += a; // chref = chref + a; => chref = 'A' + 32 => chref = 65 + 32 => chref = 97
    *p += ch;   // *p = *p + ch; => *p = 32 + 97 => *p = 129
    cout << a << ", " << ch << endl;
    return 0;
}