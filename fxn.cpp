#include <iostream>

using namespace std;

class globalClass
{
private:
    int name;

public:
    void display()
    {
        cout << "this is a global class fxn" << endl;
    }
};

class globalClass s2; // global object
int main()
{
    class globalClass s1; // local object
    s1.display();
    return 0;
}