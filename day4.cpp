#include <iostream>
using namespace std;

int number2 = 34;

void sum()
{
    // int hari = 90;
    // cout << hari << endl;

    cout << "The value of number2 is: " << number2 << endl;
    return;
}

int sum1()
{
    int a = 90;
    return a;
}

int main()
{
    // code will execute from here

    // int num1 = 4;
    // float num2 = 7;
    // cout << (num1 / num2) << endl;

    // local variable and global variable
    // {
    //     int num1 = 89;
    // }

    // int sumofTwo = sum(num1, num2); // 11
    // cout << sumofTwo << endl;

    // sum();
    // int number2 = 89;
    // number2 = 45;

    // cout << "The value of number2 is: " << number2 << endl;
    // cout << "The value of number2 is: " << ::number2 << endl;
    float num34 = 90;
    cout << num34 << endl;
    cout << 56.89f << endl;
    cout << 56.89 << endl;
    cout << 56.89l << endl;

    // typacasting of variable
    // typacasting of variable

    float op1 = 7.896;
    cout << "The integer value of " << op1 << " is : " << int(op1) << endl;
    cout << "The integer value of " << op1 << " is : " << (int)op1 << endl;
    cout << "The integer value of " << op1 << " is : " << (double)op1 << endl;

    int hello = sum1();

    return 0;
}
