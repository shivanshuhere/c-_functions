#include <iostream>
#include <conio.h>
using namespace std;

class bankDel
{
private:
    int ac;
    char name[20];
    float bal;

public:
    int setData();
    int getData();
};
int bankDel ::setData() // scope resolution operator
{
    cout << "Enter AC number :" << endl;
    cin >> ac;
    cout << "Enter name :" << endl;
    cin >> name;
    cout << "Enter balance:" << endl;
    cin >> bal;
    return 0;
}
int bankDel ::getData() // scope resolution operator
{
    cout << "AC number is :" << ac << "\t"
         << "Name :" << name << "\t"
         << "Balance is :" << bal << endl;
    return 0;
}

int main()
{
    class bankDel c1, c2;
    c1.setData();
    c1.getData();
    return 0;
}