#include <iostream>
using namespace std;

void exchange(int, int);
int main()
{
    int a, b;
    a = 10;
    b = 12;
    exchange(a, b);
    cout << "Values  in main after exchange " << endl
         << "first value :" << a << "\nsecond value :" << b << endl;
    return 0;
}
// call by value
void exchange(int x, int y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    cout << "Values after exchange" << endl
         << "first value :" << x << "\nsecond value :" << y << endl;
}