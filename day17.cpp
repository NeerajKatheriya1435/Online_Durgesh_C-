#include <iostream>
using namespace std;

class Company
{
    int productId[200];
    int productPrice[200];
    int count;

public:
    void counter() { count = 0; }
    void setPrice();
    void getPrice();
};

void Company::setPrice()
{
    cout << "Please enter given values of item: " << count + 1 << endl;
    cout << "Enter the product id" << endl;
    cin >> productId[count];
    cout << "Enter the product price" << endl;
    cin >> productPrice[count];
    count++;
}
void Company::getPrice()
{
    for (int i = 0; i < count; i++)
    {
        cout << "The Product id: " << productId[i] << " and price is " << productPrice[i] << endl;
    }
}

int main()
{

    // Let suppose i have company
    // products-->
    // Product Price-->
    Company Yamaha;
    Yamaha.counter();
    for (int i = 0; i < 2; i++)
    {
        Yamaha.setPrice();
    }
    Yamaha.getPrice();
    return 0;
}