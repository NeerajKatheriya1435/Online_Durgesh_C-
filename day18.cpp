#include <iostream>
using namespace std;

class Employee
{
private:
    int empId;
    static int empCount;

public:
    void setData()
    {
        cout << "Enter your id" << endl;
        cin >> empId;
        empCount++;
    }
    void getData()
    {
        cout << "The id of emp is: " << empId << endl;
        cout << "The id of empNumber is: " << empCount << endl;
    }
    static void getCount()
    {
        // cout << "The value of empId is: " << empId << endl;
        cout << "The value of empCount is: " << empCount << endl;
    }
};
int Employee::empCount;

// -->

int main()
{
    Employee durgesh, jogesh, ramesh;
    durgesh.setData();
    durgesh.getData();
    Employee::getCount();

    jogesh.setData();
    jogesh.getData();
    Employee::getCount();

    ramesh.setData();
    ramesh.getData();
    Employee::getCount();
    return 0;
}