// syntax - friend fxnName (args)

#include <iostream>
using namespace std;
class show
{
private:
    void dis()
    {
        cout << "private display fxn";
    }

public:
    friend void showFxn(void);
} s1;

void showFxn(void)
{
    s1.dis();
}

int main()
{
    showFxn();
    return 0;
}