#include <iostream>
using namespace std;

// 6+8i
// 3+4i
// 9+12i

class Complex
{
    int a, b;

public:
    void setData(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    void sumComplexNumber(Complex object1, Complex object2)
    {
        a = (object1.a + object2.a);
        b = (object1.b + object2.b);
    }
    void displayData()
    {
        cout << "The complex num is: " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex obj1, obj2, obj3;
    obj1.setData(2, 4);
    obj1.displayData();

    obj2.setData(1, 3);
    obj2.displayData();

    obj3.sumComplexNumber(obj1, obj2);
    obj3.displayData();
    return 0;
}