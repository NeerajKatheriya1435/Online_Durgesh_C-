#include <iostream>
using namespace std;

int main()
{
    // operators in c++
    //  1. Arithmetic Operators
    int num1 = 20, num2 = 10;
    cout << "The Addition of " << num1 << "+" << num2 << " = " << (num1 + num2) << endl;
    cout << "The Subtraction of " << num1 << "-" << num2 << " = " << (num1 - num2) << endl;
    cout << "The Multiply of " << num1 << "*" << num2 << " = " << (num1 * num2) << endl;
    cout << "The Division of " << num1 << "/" << num2 << " = " << (num1 / num2) << endl;
    cout << "The Modulo of " << num1 << "/" << num2 << " = " << (num1 % num2) << endl;
    cout << "Theb increment of num1 is " << num1++ << endl; // 20 //20
    cout << "Theb increment of num1 is " << ++num1 << endl; // 21 //22
    cout << "Theb increment of num1 is " << num1-- << endl; // 21 //22
    cout << "Theb increment of num1 is " << --num1 << endl; // 20 //20

    int a = 78; // value 78 is assigning to variable a

    // comaprion operators
    int num3 = 23, num4 = 22;
    cout << num3 << " is greater than " << num4 << " : " << (num3 > num4) << endl;  // 1
    cout << num3 << " is greater than " << num4 << " : " << (num3 < num4) << endl;  // 0
    cout << num3 << " is greater than " << num4 << " : " << (num3 == num4) << endl; // 0
    cout << num3 << " is greater than " << num4 << " : " << (num3 != num4) << endl; // 1
    cout << num3 << " is greater than " << num4 << " : " << (num3 >= num4) << endl; // 1
    cout << num3 << " is greater than " << num4 << " : " << (num3 <= num4) << endl; // 0

    // Logical operators

    cout << "And operators " << (num3 > 34 && num3 < 45) << endl; // 0
    cout << "And operators " << (num3 > 14 && num3 < 45) << endl; // 1
    cout << "Or operators " << (num3 > 34 || num3 < 45) << endl;  // 1
    cout << "Or operators " << (num3 > 34 || num3 > 45) << endl;  // 0

    // cout << num1 << endl;

    // control structures
    // 1.sequence struture

    return 0;
}
