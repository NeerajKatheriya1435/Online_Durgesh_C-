#include <iostream>
using namespace std;

// constructor overloading

class Point
{
    int x, y, z;

public:
    Point() {};
    Point(int x1, int y1 = 17)
    {
        x = x1;
        y = y1;
    }
    Point(int num1, int num2, int num3)
    {
        x = num1;
        y = num2;
        z = num3;
    }
    void displayPoint()
    {
        cout << "The point is: (" << x << ", " << y << ")" << endl;
    }
    void displayThreePoint()
    {
        cout << "The point is: (" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main()
{
    Point obj1(6, 67), obj3(6, 8, 3);
    obj1.displayPoint();

    // Point obj2;
    // obj2.displayPoint();

    obj3.displayThreePoint();
    return 0;
}