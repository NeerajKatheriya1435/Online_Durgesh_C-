#include <iostream>
using namespace std;

// student data
// typedef struct student
// {
//     string stdName;  8
//     int rollNumber;  4
//     float marks;     4
// } std123;  -->sturures are already typedefed

// union data types

typedef union mark
{
    int rollNumber; // 4
    float marks;    // 4
} var123;

// enum data type
enum Day
{
    sunday,    // 1
    monday,    // 2
    tuesday,   // 3
    wednesday, // 4
    thursday   // 5
};

int main()
{

    // user defined data type

    // struct student std1;
    // struct student std2;

    // std123 std1;

    // std1.stdName = "Durgesh";
    // std1.rollNumber = 101;
    // std1.marks = 80.56;

    // cout << "Student Name: " << std1.stdName << endl;
    // cout << "Student RollNumber: " << std1.rollNumber << endl;
    // cout << "Student Marks: " << std1.marks << endl;

    // union data type

    // var123 var1;
    // var1.marks = 45.89;
    // var1.rollNumber = 485;
    // cout << "The marks are: " << var1.marks << endl;
    // cout << "The marks RollNumber: " << var1.rollNumber << endl;

    // enum data type

    // Day today = monday;
    // cout << today << endl;
    // if (today == wednesday)
    // {
    //     cout << "Today is wedenesday" << endl;
    // }

    return 0;
}