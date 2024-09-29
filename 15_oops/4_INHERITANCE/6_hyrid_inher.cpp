#include <iostream>
using namespace std;

class A
{
public:
    void Afunc()
    {
        cout << "i am inherited from class A " << endl;
    }
};

class B : public A
{
public:
    void Bfunc()
    {
        cout << "i am inherited from class B " << endl;
    }
};

class C
{
public:
    void Cfunc()
    {
        cout << "i am inherited from class C" << endl;
    }
};

class D : public B, public C
{
public:
    void Dfunc()
    {
        cout << "i am inherited from class D " << endl;
    }
};
int main()
{
    A X;
    B Y;
    D Z;
    X.Afunc();
    Y.Afunc();
    Z.Bfunc();
    Z.Cfunc();

    return 0;
}