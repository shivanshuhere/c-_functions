#include <iostream>
using namespace std;

int factorial(int);
int main()
{
    int n, fact;
    cout << "Enter a number to find factorial :" << endl;
    cin >> n;
    fact = factorial(n);
    cout << "factorial is :" << fact << endl;
    return 0;
}

int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return (n * factorial(n - 1));
}