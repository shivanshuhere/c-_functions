#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

bool isEven(int num) //  return with No value as argument
{
    if (num % 2 == 0)
        return true;
    else
        return false;
}

int main()
{
    int n = 0;
    cout << "Enter a number :";
    cin >> n;
    if (isEven(n))
        cout << n << " is even." << endl;
    else
        cout << n << " is not even." << endl;
    return 0;
}