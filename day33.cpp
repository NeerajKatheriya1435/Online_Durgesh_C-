#include <iostream>
using namespace std;

int main()
{
    // int a = 89;
    // int *ptr = &a;
    // cout << "The value of a is: " << (*ptr) << endl;

    // int runTime;
    // cout << "Enter the value of int" << endl;
    // cin >> runTime;

    // int *ptr1 = new int(runTime);
    // cout << "The value of runtime is: " << *(ptr1) << endl;
    // int sum[] = {7, 5, 8};

    // [][][][][]

    int *ptr2 = new int[5];
    // int *ptr3 = ptr2;
    // int sum;
    // *ptr2 = 90;
    // ptr2++;
    // *ptr2 = 78;
    // cout << "The value at index 0:" << *ptr2 << endl;
    // cout << "The value at index 1:" << *ptr2 << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the value at index: " << i << endl;
        cin >> *(ptr2 + i);
    }

    delete ptr2;

    for (int i = 0; i < 5; i++)
    {
        cout << "The value at index: " << i << " is " << *(ptr2 + i) << endl;
    }
    return 0;
}