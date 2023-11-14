#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    struct lib
    {
        char title[20];
        char author[20];
        int page, price;
    };

    struct lib book1;
    strcpy(book1.title, "Berserk");
    strcpy(book1.author, "Kentaro Miura");
    book1.page = 2300;
    book1.price = 900;
    cout << book1.title << endl
         << book1.author << endl
         << book1.page << endl
         << book1.price << endl;
    return 0;
}