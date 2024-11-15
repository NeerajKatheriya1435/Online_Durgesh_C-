#include <iostream>
using namespace std;

int sumofThreeNum(int a, int b = 7, int c = 8)
{
    return (a + b + c);
}

int fact(int number)
{

    if (number < 2)
    {
        return 1;
    }

    return number * fact(number - 1);
}

int fib(int number2)
{

    if (number2 <= 2)
    {
        return 1;
    }
    return fib(number2 - 2) + fib(number2 - 1);
}

int main()
{
    // int num1, num2, num3;
    // cout << "Enter first num" << endl;
    // cin >> num1;
    // cout << "Enter second num" << endl;
    // cin >> num2;
    // cout << "Enter third num" << endl;
    // cin >> num3;

    // cout << "The sum of Three Num is: " << sumofThreeNum(num1, num2, num3) << endl;

    // int number1;
    // cout << "Enter the number you want factorial" << endl;
    // cin >> number1;
    // cout << "Factorial of " << number1 << " is " << fact(number1);

    for (int i = 1; i < 11; i++)
    {
        // int number2;
        // cout << "Enter the number you want factorial" << endl;
        // cin >> number2;
        // cout << "Factorial of " << number2 << " is " << fib(number2);
        cout << fib(i) << " ";
    }

    // 1,1,2,3,5,8,13

        return 0;
}