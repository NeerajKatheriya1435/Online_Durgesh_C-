#include <iostream>
using namespace std;

class Base
{
public:
    int var1 = 78;
    virtual void getData()
    {
        cout << "The value of var1 is: " << var1 << endl;
    }
};
class Derived : public Base
{
public:
    int var2 = 18;
    void getData()
    {
        cout << "The value of var1 is: " << var1 << endl;
        cout << "The value of var2 is: " << var2 << endl;
    }
};

int main()
{
    // Base obj1;
    // Base *obj2;
    // obj2 = &obj1;
    // obj2->getData();

    // Derived obj1;
    // Derived *obj2;
    // obj2 = &obj1;
    // obj2->getData();

    Base *obj1;
    Derived obj2;
    obj1 = &obj2;
    obj1->getData();

    return 0;
}