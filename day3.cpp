#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // setw(45)-> creates spaces 45 character
    // left-> left align the content
    // right-> right align the content
    // string name = "Hii are you?";
    // string adress = "Lucknow BKT";
    // cout << name << setw(42) << right << adress << endl;

    // char Jeevan = '8';
    // cout << Jeevan << endl;
    // char str1[34] = "Neeraj Katheriya";
    // cout << str1 << endl;

    // // refrence variable
    // int sum = 45;
    // int &sumofNumber = sum;
    // sum = 67;
    // sumofNumber = 90;

    // cout << "The value of sum: " << sum << endl;
    // cout << "The value of sumofNumber: " << sumofNumber << endl;

    // pointers

    // int n1 = 34;
    // int *n2;
    // n2 = &n1;
    // n1 = 67;
    // *n2 = 56;

    // cout << n1 << endl;
    // cout << *n2 << endl;

    // Simple calculater device;

    // int number1;
    // cout << "Enter the number 1" << endl;
    // cin >> number1;
    // cout << "The value of number1 is : " << number1 << endl;

    float num1, num2;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;

    cout << "The sum of " << num1 << " and " << num2 << " is: " << (num1 + num2) << endl;
    cout << "The subtraction of " << num1 << " and " << num2 << " is: " << (num1 - num2) << endl;
    cout << "The division of " << num1 << " and " << num2 << " is: " << (num1 / num2) << endl;
    cout << "The multiply of " << num1 << " and " << num2 << " is: " << (num1 * num2) << endl;
    cout << "The multiply of " << num1 << " and " << num2 << " is: " << (num1 * num2) << endl;
    return 0;
}