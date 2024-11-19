#include <iostream>
using namespace std;

class Empolyee
{
private:
    int a, b, c;

public:
    int num1, num2;
    void setData(int number1, int number2, int number3);
    void getData(void)
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of num1 is: " << num1 << endl;
        cout << "The value of num2 is: " << num2 << endl;
    }
};

void Empolyee::setData(int number1, int number2, int number3)
{
    a = number1;
    b = number2;
    c = number3;
};

int main()
{
    Empolyee emp1;
    emp1.num1 = 67;
    emp1.num2 = 56;
    // emp1.a = 90;
    emp1.setData(45, 78, 23);
    emp1.getData();
    return 0;
}
