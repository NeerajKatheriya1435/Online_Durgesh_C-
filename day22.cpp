#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    //  Complex(void) {};  // default constructor
    Complex(int, int); // Constructor inovoked parameterized contructor
    // void setData(int num1, int num2)
    // {
    //     a = num1;
    //     b = num2;
    // }
    void displayData()
    {
        cout << "The complex num is: " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(int num1, int num2)
{
    a = num1;
    b = num2;
};

int main()
{
    Complex obj1(4, 5), obj2(6, 8);
    // obj1.setData(6, 8);
    obj1.displayData();
    obj2.displayData();
    return 0;
}