#include <iostream>
using namespace std;

class Student
{
protected:
    int num2;
    int num1;

public:
    Student(int value1, int value2) : num2(value1), num1(num2 + value1)
    {
        // num1 = number1;
        // num2 = number2;
        cout << "The value of a is: " << num1 << endl;
        cout << "The value of b is: " << num2 << endl;
    }
};

int main()
{
    Student obj1(4, 7);
    return 0;
}