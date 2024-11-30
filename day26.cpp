// mulitilevel inheritance

#include <iostream>
using namespace std;

class Student
{
private:
    int a, b;

protected:
    int num1, num2;

public:
    int number1, number2;
    void setData(int numb1, int numb2)
    {
        a = 56;
        b = 67;
        num1 = 5;
        num2 = 45;
        number1 = numb1;
        number2 = numb2;
    }
    void getData()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of num1 is: " << num1 << endl;
        cout << "The value of num2 is: " << num2 << endl;
        cout << "The value of number1 is: " << number1 << endl;
        cout << "The value of number2 is: " << number2 << endl;
    }
};
/*
                        private inheritance     public inheritance      protected inheritance
private member          not inherited           not inherited           not inherited
protected member        private member          protected member        protected member
public member           private member          public member           protected member

*/

class Section : public Student
{
};

int main()
{
    Section std1;
    // std1.number1 = 89;
    // std1.number2 = 67;
    std1.setData(67, 89);
    std1.getData();

    return 0;
}