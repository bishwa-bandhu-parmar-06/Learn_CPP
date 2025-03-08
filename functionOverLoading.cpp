#include <iostream>
using namespace std;
int max(int x, int y)
{
    return x > y ? x : y;
}
int min(int x, int y)
{
    return x < y ? x : y;
}
int main()
{
    int (*fp)(int, int);
    fp = max;
    int valueMax = (*fp)(10, 5);
    cout << valueMax << endl;
    fp = min;
    int valueMin = (*fp)(10, 5);
    cout << valueMin << endl;
    return 0;
}