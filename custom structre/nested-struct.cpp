#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct ITI
{

    char ownership[10];
    char loc[30];
    struct Staff
    {
        char name[20];
        char role[20];
        int salary;
    } sunnyPaul;
    struct stu
    {
        char name[20];
        char course[10];
    };
};

int main()
{
    ITI daulatpur;
    strcpy(daulatpur.ownership, "Govt");
    strcpy(daulatpur.loc, "VPO Daulatpur Distt Kangra HP");
    strcpy(daulatpur.sunnyPaul.name, "Sunny Paul");
    strcpy(daulatpur.sunnyPaul.role, "Trade & Practical");
    daulatpur.sunnyPaul.salary = 15000;
    cout << daulatpur.ownership << endl
         << daulatpur.loc << endl
         << daulatpur.sunnyPaul.name << endl
         << daulatpur.sunnyPaul.role << endl
         << daulatpur.sunnyPaul.salary << endl;
    return 0;
}