#include <iostream>
using namespace std;

class A
{ // base class for B
public:
    A()
    {
        cout << "A" << endl;
    }
};

class B : public A
{ // derived form A and base for C
public:
    B()
    {
        cout << "B" << endl;
    }
};

class C : public B
{ // derived form B
public:
    C()
    {
        cout << "C" << endl;
    }
};

int main()
{
    C obj;
    return 0;
}