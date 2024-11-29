#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
class universitystudent
{
private:
    string RollNo, Name, Subject, Address;

public:
    universitystudent() : RollNo(""), Name(""), Subject(""), Address("") {}
    int setRollNo(string rollNo)
    {
        RollNo = rollNo;
    }
    int setName(string name)
    {
        Name = name;
    }
    int setSubjrct(string subject)
    {
        Subject = subject;
    }
    int setAddress(string address)
    {
        Address = address;
    }
    string getRollNo()
    {
        return RollNo;
    }
    string getName()
    {
        return Name;
    }
    string getSubject()
    {
        return Subject;
    }
    string getAddress()
    {
        return Address;
    }
};

void add(universitystudent student)
{
    string rollNo, name, subject, address;
    cout << "\tEnter RollNo of Student:";
    cin >> rollNo;
    student.setRollNo(rollNo);

    cout << "\tEnter Name of Student:";
    cin >> name;
    student.setName(name);

    cout << "\tEnter Address of Student:";
    cin >> address;
    student.setAddress(address);

    // cout << "\tEnter Subjrct of Student:";
    // cin >> subject;
    // student.setSubject(subject);
    // ofstream out("C:\Users\a2z\Desktop\c++ programs\savedata.txt", ios::app);
    // if (!out)
    // {
    //     cout << "\tError: File Can't Open!" << endl;
    // }
    // else
    // {
    //     out << "\t" << student.getRollNo() << " : " << student.getName() << " : " << student.getSubject() << " : " << student.getAddress() << endl
    //         << endl;
    // }
    // out.close();
    cout << "\tStudent Added Successfuly!" << endl;
}

int main()
{
    universitystudent student;

    bool exit = false;
    while (!exit)
    {
        system("cls");
        int val;
        cout << "\tWelcome To University Manegement system" << endl;
        cout << "*******************************************" << endl;
        cout << "\t1.Add Student." << endl;
        cout << "\t2.Search Student." << endl;
        cout << "\t3.Update Data Of Student." << endl;
        cout << "\t4.Exit" << endl;
        cout << "\tEnter Your Choice:" << endl;
        cin >> val;
        if (val == 1)
        {
            system("cls");
            Sleep(7000);
        }
    }

    return 0;
}