#include <iostream>
#include <string>
using namespace std;

class Binary
{
    string s;

public:
    void getBinary();
    void checkBinary();
    void display();
    void onesComplement();
};
void Binary::getBinary(void)
{
    cout << "Enter The string: " << endl;
    cin >> s;
}
void Binary::checkBinary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "Invalid Binary Format! " << endl;
            exit(0);
        }
    }
}
void Binary::display()
{
    cout << "My Binary String Is" << s << endl;
}

void Binary::onesComplement()
{
    cout << "After Ones Complement: " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

// message:enter your string
// 5657
// check it it binary or not

// show data
// ones complement
// show data

// 111000010
// ones complement
// 000111101

int main()
{

    Binary str;
    str.getBinary();
    str.checkBinary();
    str.display();
    str.onesComplement();
    str.display();

    return 0;
}