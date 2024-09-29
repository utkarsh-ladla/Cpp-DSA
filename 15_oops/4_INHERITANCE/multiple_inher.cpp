#include <iostream>
using namespace std;
class A
{
public:
    void FuncA()
    {
        cout << "i am inherited from class A." << endl;
    }
};

class B
{
public:
    void FuncB()
    {
        cout << "i am inherited from class B." << endl;
    }
};

class C : public A, public B // multiple inheritance
{
};
int main()
{
    C D;
    D.FuncA(); // calling of function
    D.FuncB();
    return 0;
}