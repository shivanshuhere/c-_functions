#include <iostream>

using namespace std;

void fun()
{
    class localClass // local class
    {
    public:
        void display()
        {
            cout << "this is a local class fxn" << endl;
        }
    };
    class localClass s1;
    s1.display();
}
int main()
{
    fun();
    return 0;
}