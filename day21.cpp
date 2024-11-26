#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    friend Complex sumComplexNumber(Complex object1, Complex object2);
    void setData(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    void displayData()
    {
        cout << "The complex num is: " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplexNumber(Complex object1, Complex object2)
{
    Complex obj45;
    obj45.a = (object1.a + object2.a);
    obj45.b = (object1.b + object2.b);
    return obj45;
}

int main()
{
    Complex obj1, obj2, obj3;
    obj1.setData(2, 4);
    obj1.displayData();

    obj2.setData(1, 3);
    obj2.displayData();

    obj3 = sumComplexNumber(obj1, obj2);
    obj3.displayData();
    return 0;
}