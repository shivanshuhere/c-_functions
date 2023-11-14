#include <iostream>

using namespace std;

class Car
{
private:
    string model;
    string carName;
    int price;

public:
    Car(string x, string y, int p)
    {
        model = x;
        carName = y;
        price = p;

        cout << "Model :" << model << endl
             << "Car name :" << carName << endl
             << "price :" << price << endl;
    }
};

int main()
{
    Car car1("12445", "Fortuner", 1000000000);
    cout << endl;
    Car car2("191219", "Audi", 100404050);
    return 0;
}