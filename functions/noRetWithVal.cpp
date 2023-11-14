#include <iostream>
#include <conio.h>

using namespace std;

void wishDiwali(int times) // No return and with Argument Value
{
    int i = 0;
    while (i != times)
    {
        cout << i + 1 << " Happy Diwali !" << endl;
        i++;
    }
}

int main()
{
    wishDiwali(120);
    return 0;
}