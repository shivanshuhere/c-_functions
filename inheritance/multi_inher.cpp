#include <iostream>
using namespace std;

class student // base class 1
{
    int rn;
    char name[20];

public:
    void setData1()
    {
        cout << "Enter name and roll no of student :";
        cin >> name >> rn;
    }
    void getData1()
    {
        cout << "Student's name is : " << name << endl
             << "Student's roll no is : " << rn << endl;
    }
};

class sport // base class 2
{
    char sport[10];

public:
    void setData2()
    {
        cout << "Enter your fav sports : ";
        cin >> sport;
    }
    void getData2()
    {
        cout << "student's fav sports game  is : " << sport << endl;
    }
};

class marks : public student, sport // derived class
{
    int s1, s2;

public:
    void setData()
    {
        setData1();
        cout << "Enter marks of 1st and 2nd subject : ";
        cin >> s1 >> s2;
        setData2();
    }
    void getData()
    {
        getData1();
        cout << "Marks of 1st Subject is : " << s1 << endl
             << "Marks of 2nd Subject is :" << s2 << endl;
        getData2();
    }
};

int main()
{
    marks stu1;
    stu1.setData();
    stu1.getData();

    return 0;
}