#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNumber;

public:
    void setRoll(int roll)
    {
        rollNumber = roll;
    }
    void getRollNumber()
    {
        cout << "Your roll Num: " << rollNumber << endl;
    }
};

class Exam : public Student
{
protected:
    int maths, science;

public:
    void setMarks(int mathMarks, int scienceMarks)
    {
        maths = mathMarks;
        science = scienceMarks;
    }
    void getMarks()
    {
        cout << "The maths marks are: " << maths << endl;
        cout << "The science marks are: " << science << endl;
    }
};

class Result : Exam
{
protected:
    int myResult;

public:
    void getResult()
    {
        setRoll(102);
        getRollNumber();
        setMarks(67, 75);
        getMarks();
        cout << "The result is: " << (maths + science) << endl;
    }
};

int main()
{

    Result std1;
    std1.getResult();
    return 0;
}