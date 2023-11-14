#include <iostream>

using namespace std;

class globalClass // global class
{
public:
    void display()
    {
        cout << "this is a global class fxn" << endl;
    }
};
int main()
{
    class globalClass s1;
    s1.display();
    return 0;
}