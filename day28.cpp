#include <iostream>
using namespace std;

// multiple inheritance
// Ambiguity
// (A,B)--->C
class A
{
protected:
    int num1 = 45;

public:
    void getNum1()
    {
        cout << "The number1 is: " << num1 << endl;
    }
    void durgesh()
    {
        cout << "Hello good morining";
    }
};

class B
{
protected:
    int num2 = 48;

public:
    void getNum2()
    {
        cout << "The number1 is: " << num2 << endl;
    }
    void durgesh()
    {
        cout << "Hello Namaste sir";
    }
};

class C : public A, public B
{
protected:
    int num3 = 35;

public:
    void getNum3()
    {
        cout << "The number1 is: " << num3 << endl;
    }
    void durgesh()
    {
        cout << "Hello sir kaise ho" << endl;
    }
};

int main()
{
    C obj1;
    obj1.getNum1();
    obj1.getNum2();
    obj1.getNum3();
    obj1.durgesh();
    return 0;
}