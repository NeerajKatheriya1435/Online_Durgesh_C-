#include <iostream>
using namespace std;

// A-->B-->C

// C obj1(3,67,3,2,6) A(3,67)

// A--->(B,C)--->D

class A
{
};
class B
{
};

// B objB--->   A(),B()

// class C : public A, public B
// {
//     // objC--> A(),B(),C()
// };

class C : virtual public B, virtual public A
{
    // objC--> A(),B(),C()
};

int main()
{

    return 0;
}