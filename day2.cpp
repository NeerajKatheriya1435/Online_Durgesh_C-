#include <iostream>
using namespace std;

int main()
{

  // sigle line comment
  /*
    ndsfnd
  csdknvkdfn
  nfdjvnjd
  njfdjv

  */

  // This simply prints a hello gyus on screen
  // Varibles
  // _shyam5345 rohit hghhj jhjhjh

  // int,char,float,double,bool

  // int --> 2,4,56,-6,-1
  // char --> 'c','u','t'
  // float --> 3.45,7.895
  // double --> 5.67878657
  // bool --> true,false
  // string hello = "Hii";
  // char shyam[] = "Heelo ji";
  // char shaym1[4];

  cout << shyam << endl;
  // cout << hello << endl;

  int apple = 45;
  int boy;  // declaration
  boy = 34; // initilization

  float hameed = 4.567;
  char shivam = 'g';
  double rohit = 34.56788;
  bool op1 = false;
  cout << "The op1 is: " << op1 << endl;
  cout << "The value of rohit is: " << rohit << endl;
  cout << "The value hameed is: " << hameed << endl;
  cout << "The value of apple is: " << apple << endl;
  cout << "The character is: " << shivam << endl;

  // cout << "Hello gyus!";

  // refrence variables
  int yx = 67;

  int &z = yx;
  z = 23;
  z = 78;

  cout << yx << endl;
  cout << z << endl;

  // pointer variable

  int *b;
  int s = 12;
  cout << "The value of s is: " << s << endl;
  b = &s;
  *b = 56;
  cout << "The value of s is: " << s << endl;
  return 0;
}
