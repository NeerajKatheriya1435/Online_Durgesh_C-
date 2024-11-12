#include <iostream>
using namespace std;

// function formal parameters
// int sumofTwoNumber(int a, int b)
// {
//     // int sum1 = number1 + number2;
//     a = 89;
//     return a;
// }
// int sumofTwoNumber1(int *a, int *b)
// {
//     // int sum1 = number1 + number2;
//     *a = 89;
//     return *a;
// }

int sumofTwoNumber2(int, int);

int main()
{
    // function
    int number1, number2;
    cout << "Enter the number1: " << endl;
    cin >> number1;
    cout << "Enter the number2: " << endl;
    cin >> number2;

    // function is called here actual parametrs
    // pass by value
    // int c = sumofTwoNumber(number1, number2);
    // cout << "The sum of Numbers is: " << c << endl; // 89

    // pass by refrence
    // method1 use pointers
    // int d = sumofTwoNumber1(&number1, &number2);
    // cout << number1; // 89   user value

    // method1 use refrence variable
    int d = sumofTwoNumber2(number1, number2);
    cout << number1; // 89   user value

    return 0;
}

int sumofTwoNumber2(int a, int b)
{
    // int sum1 = number1 + number2;
    a = 89;
    return a;
}