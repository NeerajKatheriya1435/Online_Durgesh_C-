#include <iostream>
using namespace std;

int main()
{
    // Array->
    // int stdMarks[] = {34, 45, 23, 37, 44};
    int stdMarks[5];
    stdMarks[0] = 54;
    stdMarks[1] = 84;
    stdMarks[2] = 64;
    stdMarks[3] = 94;
    stdMarks[4] = 74;

    // Read opration
    cout << "Value of Marks[0] " << stdMarks[0] << endl;
    cout << "Value of Marks[1] " << stdMarks[1] << endl;
    // To update value
    stdMarks[2] = 48;
    cout << "Value of Marks[2] " << stdMarks[2] << endl;
    cout << "Value of Marks[3] " << stdMarks[3] << endl;
    cout << "Value of Marks[4] " << stdMarks[4] << endl;

    // cout << "Adress of stdMarks[0] " << stdMarks << endl;
    // cout << "Adress of stdMarks[0] " << (stdMarks + 1) << endl;
    // cout << "Adress of stdMarks[0] " << (stdMarks + 2) << endl;
    // cout << "Adress of stdMarks[0] " << (stdMarks + 3) << endl;
    // cout << "Adress of stdMarks[0] " << (stdMarks + 4) << endl;

    int *pointer = stdMarks;
    // cout << "Adress of stdMarks[0] " << pointer << endl;
    // cout << "Adress of stdMarks[0] " << (pointer + 1) << endl;
    // cout << "Adress of stdMarks[0] " << (pointer + 2) << endl;
    // cout << "Adress of stdMarks[0] " << (pointer + 3) << endl;
    // cout << "Adress of stdMarks[0] " << (pointer + 4) << endl;

    // cout << "Adress of stdMarks[0] " << pointer << endl;
    // pointer++;
    // cout << "Adress of stdMarks[0] " << pointer << endl;
    // pointer++;
    // cout << "Adress of stdMarks[0] " << pointer << endl;
    // pointer++;
    // cout << "Adress of stdMarks[0] " << pointer << endl;
    // pointer++;
    // cout << "Adress of stdMarks[0] " << pointer << endl;

    // cout << "Adress of stdMarks[0] " << stdMarks << endl;
    // stdMarks++;
    // cout << "Adress of stdMarks[0] " << stdMarks << endl;
    // stdMarksr++;
    // cout << "Adress of stdMarks[0] " << stdMarks << endl;
    // stdMarks++;
    // cout << "Adress of stdMarks[0] " << stdMarks << endl;

    // {0,1,2,3,4}

    // position of next element in array = current Address+datatypesize*index

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << stdMarks[i] << endl;
    // }
    for (int elem : stdMarks)
    {
        cout << elem << endl;
    }

    string str[] = {"neeraj", "katheriya"};
    for (string elem : str)
    {
        cout << elem << endl;
    }

    float str123[] = {4.7, 5.9};

    for (float elem : str123)
    {
        cout << elem << endl;
    }

    return 0;
}