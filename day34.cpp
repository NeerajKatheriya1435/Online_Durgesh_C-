#include <iostream>
using namespace std;

class Employee
{
public:
    int a;
    void setData(int a)
    {
        this->a = a;
    }
    void getData()
    {
        cout << "The value of a is: " << a << endl;
    }
};

int main()
{
    Employee emp1;
    // emp1.a = 89;
    // emp1.setData(89);
    // emp1.getData();

    // Employee *employee1 = &emp1;

    // (*employee1).setData(90);
    // (*employee1).getData();
    // employee1->a = 56;
    // employee1->setData(78);
    // employee1->getData();

    Employee *pointer = new Employee[5];
    pointer->setData(78);
    pointer->getData();
    delete[] pointer;
    free(pointer);

    (pointer + 1)->setData(67);
    (pointer + 1)->getData();
    // polymorshim  -->ek name kaam kai sare
    return 0;
}