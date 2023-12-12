#include <iostream>

using namespace std;

class A // base for D
{
public:
    A()
    {
        cout << "A" << endl;
    }
};

class B // base for D
{
public:
    B()
    {
        cout << "B" << endl;
    }
};

class C // base for D
{
public:
    C()
    {
        cout << "C" << endl;
    }
};

class D : public A, public B, public C // derived from A, B and C and base for E and F
{
public:
    D()
    {
        cout << "D" << endl;
    }
};

class E : public D // derived from D
{
public:
    E()
    {
        cout << "E" << endl;
    }
};

class F : public D // derived from
{
public:
    F()
    {
        cout << "F" << endl;
    }
};

// hybrid looks something like this
/*
A       B       C
        D
    E       F
*/

int main()
{
    D obj;
    return 0;
}