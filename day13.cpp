#include <iostream>
using namespace std;

// inline int sum(int num1, int num2 = 8)
// {
//     return (num1 + num2);
// }

// inline float simpleInterest(int amt, int tm = 4, int rate = 8)
// {
//     float totalAmt = (amt * tm * rate) / 100;
//     return totalAmt;
// }

int factorial(int num)
{

    if (num < 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

int main()
{

    // sum function
    // int number1, number2;
    // cout << "Enter first number: " << endl;
    // cin >> number1;
    // cout << "Enter second number: " << endl;
    // cin >> number2;

    // int sumofTwonum = sum(number1, number2);
    // int sumofTwonum = sum(number1, number2);

    // cout << "The sum of two number is: " << sum(number1, number2) << endl;
    // cout << "The sum of two number is: " << sum(number1) << endl;

    // cout << "Total interest: " << simpleInterest(100, 8);

    // factorial
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    int fact = factorial(num);
    cout << "The factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}