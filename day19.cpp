#include <iostream>
using namespace std;

class Employee
{
private:
    int empId;

public:
    void setData()
    {
        cout << "Enter your id" << endl;
        cin >> empId;
    }
    void getData()
    {
        cout << "The id of emp is: " << empId << endl;
    }
};

int main()
{
    // array of objects
    Employee honda[4];

    for (int i = 0; i < 4; i++)
    {
        honda[i].setData();
        honda[i].getData();
    }

    return 0;
}