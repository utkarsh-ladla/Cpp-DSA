#include <iostream>
using namespace std;
int main()
{

    int num = 5;
    cout << num << endl;

    // address operator
    cout << "address of num  " << &num << endl;

    int *ptr = &num;

    cout << "address is : " << ptr << endl; // ptr store address of variable
    cout << "value is : " << *ptr << endl;  // value at address ..

    double d = 4.3;
    double *p2 = &d;

    cout << "address is : " << p2 << endl;
    cout << "value is : " << *p2 << endl;
    cout << "size of integer " << sizeof(num) << endl;
    cout << "size of pointer " << sizeof(ptr) << endl;
     cout << "size of pointer " << sizeof(p2) << endl;


    return 0;
}