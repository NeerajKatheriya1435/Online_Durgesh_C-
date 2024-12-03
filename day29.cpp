#include <iostream>
using namespace std;

// hybrid inheritance

// A-->(B,C)--->D

// Student  (roll Number) ---->  (Test , Sports)----> Result obj1.setnumber

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

class Test : virtual public Student
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
class Sports : virtual public Student
{
protected:
    int cricket;

public:
    void setMarks2(int cricketMarks)
    {
        cricket = cricketMarks;
    }
    void getMarks2()
    {
        cout << "The maths marks are: " << cricket << endl;
    }
};

class Result : public Test, public Sports
{
protected:
    int myResult;

public:
    void getResult()
    {
        setRoll(78);
        setMarks(45, 78);
        setMarks2(75);
        getRollNumber();
        getMarks();
        getMarks2();
        cout << "The result is: " << (maths + science + cricket) << endl;
    }
};

int main()
{
    Result obj1;
    obj1.getResult();
    return 0;
}