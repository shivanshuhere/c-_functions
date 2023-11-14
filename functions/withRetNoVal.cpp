#include <iostream>
#include <conio.h>

using namespace std;

int wishDiwali(void) //  return with No value as argument
{
    int count = 0;
    cout << "Enter the wish count :";
    cin >> count;
    return count;
}

int main()
{
    int wish = wishDiwali();
    cout << "Happy Diwali " << wish << " times." << endl;
    return 0;
}