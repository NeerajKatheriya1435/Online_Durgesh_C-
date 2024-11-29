#include <iostream>
using namespace std;

//

class Employee
{
    int a, b;

public:
    int c = 9;
    Employee() {};
    Employee(int num1)
    {
        a = num1;
    }
    void displayA()
    {
        cout << "The value of a is: " << c << endl;
    }
};

// visiblility mode private

// The public data members and member functions of employee class becomes the private data members and member function of the Programmer class

// visiblility mode public

// The public data members and member functions of employee class becomes the public data members and member function of the Programmer class
class Programmer : public Employee
{
    int num = 90;

public:
    Programmer(int num1)
    {
        c = 89;
    };
    void getData()
    {
        cout << "The value of num1 is: " << num << endl;
    }
};

int main()
{
    Employee durgesh(8);
    durgesh.displayA();
    Programmer shivam(67);
    shivam.displayA();
    shivam.getData();
    return 0;
}