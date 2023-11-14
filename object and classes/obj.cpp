#include <iostream>
#include <conio.h>
using namespace std;

class student
{
private:
    int rn;
    char name[20];

public:
    int setData()
    {
        cout << "Enter rollno :" << endl;
        cin >> rn;
        cout << "Enter name :" << endl;
        cin >> name;
        return 0;
    }
    int getData()
    {
        cout << rn << "\t"
             << name << endl;
        return 0;
    }
};

int main()
{
    class student s1, s2;
    s1.setData();
    s1.getData();
    return 0;
}