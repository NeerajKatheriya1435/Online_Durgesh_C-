#include <iostream>
using namespace std;

class Base1
{
protected:
    int num1;

public:
    Base1(int n1)
    {
        num1 = n1;
        cout << "Contructor 1 is called" << endl;
    }
    void getNum1()
    {
        cout << "The value of num1 is: " << num1 << endl;
    }
};
class Base2
{
protected:
    int num2;

public:
    Base2(int n2)
    {
        num2 = n2;
        cout << "Contructor 2 is called" << endl;
    }
    void getNum2()
    {
        cout << "The value of num2 is: " << num2 << endl;
    }
};

class Derived : virtual public Base2, virtual public Base1
{
protected:
    int num3;
    int num4;

public:
    Derived(int a, int b, int c, int d) : Base2(a), Base1(b)
    {
        num3 = c;
        num4 = d;
    }
    void getNum3()
    {
        getNum1();
        getNum2();
        cout << "The value of num3 is: " << num3 << endl;
        cout << "The value of num4 is: " << num4 << endl;
    }
};

int main()
{
    Derived obj1(4, 7, 8, 9);
    obj1.getNum3();
    return 0;
}