#include <iostream>

using namespace std;

int sq(int x)
{
    return x * x;
}
float sq(float x)
{

    return (x * x);
}
double sq(double x)
{
    return (x * x);
}

int main()
{
    int in, a;
    float flo, b;
    double dou, c;

    cout << "Enter integer value :";
    cin >> in;
    cout << "Enter float value :";
    cin >> flo;
    cout << "Enter double value :";
    cin >> dou;
    a = sq(in);
    a = sq(flo);
    a = sq(dou);
    cout << "sq of int is :" << a << endl;
    cout << "sq of float is :" << b << endl;
    cout << "sq of double is :" << c << endl;

    return 0;
}