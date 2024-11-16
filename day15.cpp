#include <iostream>
using namespace std;

class Animal
{
private:
    int num1, num2, num3; // data members

public:
    int num4, num5, num6; // data members
    int average(int number1, int number2, int number3);

    void givesData()
    {
        cout << "The value of num1 is: " << num1 << endl;
        cout << "The value of num1 is: " << num2 << endl;
        cout << "The value of num1 is: " << num3 << endl;
        cout << "The value of num1 is: " << num4 << endl;
        cout << "The value of num1 is: " << num5 << endl;
        cout << "The value of num1 is: " << num6 << endl;

        cout << "The average of three num: " << average(num1, num2, num3) << endl;
    }
};

int Animal::average(int number1, int number2, int number3)
{
    num1 = number1;
    num2 = number2;
    num3 = number3;
    return (number1 + number2 + number3) / 3;
}

int main()
{

    Animal dog;
    dog.num4 = 67;
    dog.num5 = 7;
    dog.num6 = 897;

    dog.average(1, 6, 8);
    dog.givesData();

    return 0;
}