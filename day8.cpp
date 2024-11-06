#include <iostream>
using namespace std;

int main()
{
    // break and continue

    // for (int j = 0; j < 10; j++)
    // {
    //     if (j % 2 == 0)
    //     {
    //         // cout << "Skip the iteration" << endl;
    //         continue;
    //     }
    //     cout << j << endl;
    // }

    // int num;
    // cout << "Enter the number" << endl;
    // cin >> num;
    // switch (num)
    // {
    // case 1:
    //     cout << "Number is 1" << endl;
    //     break;

    // case 2:
    //     cout << "Number is 2" << endl;
    //     break;

    // case 3:
    //     cout << "Number is 3" << endl;
    //     break;

    // default:
    //     cout << "Please enter value from 1 to 3" << endl;
    //     break;
    // }

    int number1 = 45;
    int *ptr1 = &number1;

    number1 = 78;
    *ptr1 = 67;

    cout << "The address of number1" << &number1 << endl;
    cout << "The address of number1" << ptr1 << endl;
    // cout << "The address of number1" << &ptr1 << endl;
    cout << "The value of number1 is: " << number1 << endl;
    cout << "The value of number1 is: " << *(ptr1) << endl;

    int **ptr2 = &ptr1;

    cout << "The address of ptr1 " << &ptr1 << endl;
    cout << "The address of ptr2 " << ptr2 << endl;
    cout << "The address of ptr2 " << *ptr2 << endl;
    cout << "The address of ptr2 " << &number1 << endl;
    cout << "The address of ptr2 " << **ptr2 << endl;
    cout << "The address of ptr2 " << number1 << endl;

    // free(ptr1);
    // free(ptr2);

    // Array
    //  const arr1=["vfjkv",78687,565,null,undefined];

    return 0;
}