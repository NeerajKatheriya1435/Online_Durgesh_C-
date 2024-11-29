#include <iostream>
using namespace std;

// destructor
class Employee
{
    int a = 8;

public:
    Employee(void)
    {
        cout << "The value of a is: " << a << endl;
    };
    ~Employee()
    {
        cout << "This is Destructor call" << endl;
    }
};

int main()
{

    cout << "I am the main Program" << endl;
    Employee durgesh;

    {
        Employee rohit, shyam;
    }
    cout << "Exiting the block" << endl;
    return 0;
}

/*inheritance

1. single level inheritance
    A-->B
    ex- Employee---->Programmer
    Employee+More;

2. Multilevel inheritance.
    A--->B--->C--->D

3. Multiple inheritance
    (A,B)--->C

4. Hierarichal inheritance
    A---->(B,C,D)

5. Hybrid inheritance
    A--->(B,C)--->D

class Base{

};

class Derived:{private/public/protected(visibilty-mode)} Base{

};

class Derived:Base{
// visibility mode---> private
};

class Derived:public Base{
// visibility mode---> public
};




*/