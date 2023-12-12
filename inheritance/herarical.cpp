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

class C : public A
{ // derived form A and base for F and G
public:
    C()
    {
        cout << "C" << endl;
    }
};

class D : public B // derived from B
{
public:
    D()
    {
        cout << "D" << endl;
    }
};

class E : public B // derived from B
{
public:
    E()
    {
        cout << "E" << endl;
    }
};

class F : public C // derived from C
{
public:
    F()
    {
        cout << "F" << endl;
    }
};

class G : public C // derived from C
{
public:
    G()
    {
        cout << "G" << endl;
    }
};

// inheritance looks something like this
/*
            A
    B                C
D       E       F           G

*/

int main()
{
    G obj;
    return 0;
}