#include <iostream>
using namespace std;

// volume of cube
int volume(int side)
{
    cout << "1st function" << endl;
    return (side * side * side);
}

// volume of cuboid
int volume(int l, int b, int h)
{
    cout << "2nd function" << endl;
    return (l * b * h);
}
float volume(float l, int b, int h)
{
    cout << "3rd function" << endl;
    return (l * b * h);
}
int main()
{

    // Volume of cube
    cout << "The volume of cube is: " << volume(8) << endl;

    // Volume of cuboid
    cout << "The volume of cuboid is: " << volume(3, 7, 5) << endl;

    cout << "The volume of cuboid is: " << volume(3.78f, 7, 5) << endl;
    return 0;
}

// main programming -->object oriented programming

// class--(Man ---> Running,Eeating,Listening,Speaking)  Noraml Man

// coding principal  DRY --> Do not repeat yourself

// Doctor   -->Schooling,Operations,
// Singer   -->Buying intrument,Singing,---->english

// classes --> template like form
// objects --> record like a std1
// data abstraction and encapsulation --> layer of good looking
// inheritance --> a->b->c
// polymorphism --> name one work so many