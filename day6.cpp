#include <iostream>
using namespace std;

int main()
{
    // control structures

    // 1. sequence structure
    // cout << 1 << endl;
    // cout << 2 << endl;
    // cout << 3.67 << endl;

    // 2. selection structures

    // int age;
    // cout << "What is your age please enter here: " << endl;
    // cin >> age;

    // if (age < 18 && age >= 0)
    // {
    //     cout << "You can not drive the car You are a child";
    // }
    // else if (age >= 18 && age <= 80)
    // {
    //     cout << "You can drive the car You are a man/woman";
    // }
    // else if (age > 80 && age < 130)
    // {
    //     cout << "You can not drive the car You are too man/woman old";
    // }
    // else
    // {
    //     cout << "Please enter valid age";
    // }

    // switch (age)
    // {
    // case 0:
    //     cout << "You can not drive the car You are a child" << endl;
    //     break;
    // case 13:
    //     cout << "You can not drive the car You are a child" << endl;
    //     break;
    // case 23:
    //     cout << "You can  drive the car You are a man/woman" << endl;
    //     break;
    // default:
    //     cout << "Please enter the given input" << endl;
    //     break;
    // }

    int rollNumber;
    cout << "Enter Your Roll Number: " << endl;
    cin >> rollNumber;

    string name1;
    string Address;
    int Physics;
    int Maths;
    int Hindi;
    int Total;
    float percent;
    // switch (rollNumber)
    // {
    // case 101:
    //     name1 = "Durgseh";
    //     Address = "Gonda Uttar Pradesh";
    //     Hindi = 79;
    //     Maths = 71;
    //     Physics = 68;
    //     Total = (Hindi + Maths + Physics);
    //     percent = ((float)Total * 100) / 300;
    //     cout << "Name: " << name1 << endl;
    //     cout << "Address: " << Address << endl;
    //     cout << "Total Marks: " << Total << endl;
    //     cout << "Total Percentage: " << percent << endl;
    //     if (percent > 72)
    //     {
    //         cout << "You are wiiner";
    //     }
    //     else
    //     {
    //         cout << "You are not wiiner";
    //     }
    //     break;

    // default:
    //     break;
    // }

        // nested if else;
    if (rollNumber == 101)
    {
        name1 = "Durgseh";
        Address = "Gonda Uttar Pradesh";
        Hindi = 79;
        Maths = 71;
        Physics = 68;
        Total = (Hindi + Maths + Physics);
        percent = ((float)Total * 100) / 300;
        cout << "Name: " << name1 << endl;
        cout << "Address: " << Address << endl;
        cout << "Total Marks: " << Total << endl;
        cout << "Total Percentage: " << percent << endl;
        if (percent > 72)
        {
            cout << "You are wiiner";
        }
        else
        {
            cout << "You are not wiiner";
        }
    }
    else if (rollNumber == 102)
    {
        name1 = "Durgseh1";
        Address = "Gonda Uttar Pradesh1";
        Hindi = 79;
        Maths = 71;
        Physics = 68;
        Total = (Hindi + Maths + Physics);
        percent = ((float)Total * 100) / 300;
        cout << "Name: " << name1 << endl;
        cout << "Address: " << Address << endl;
        cout << "Total Marks: " << Total << endl;
        cout << "Total Percentage: " << percent << endl;
        if (percent > 72)
        {
            cout << "You are wiiner";
        }
        else
        {
            cout << "You are not wiiner";
        }
    }
    else
    {
        cout << "Please enter valid rollNumber";
    }
    return 0;
}
