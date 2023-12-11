#include <iostream>
using namespace std;

class Complex
{
public:
    int real, img;

    Complex(int x = 0, int y = 0)
    {
        real = x;
        img = y;
    }

    void getData()
    {
        cout << real << " + i" << img << endl;
    }

    // + overloading
    Complex operator+(Complex x)
    {
        Complex res;
        res.real = real + x.real;
        res.img = img + x.img;
        return res;
    }
};

int main()
{
    Complex n1(2, 5);
    Complex n2(4, 7);
    Complex res;
    res = n1 + n2;
    res.getData();
}