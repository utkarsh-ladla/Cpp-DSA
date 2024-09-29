#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout << "from class A" << endl;
    }
};
class B:public A{
    public:
    void func2(){
        cout <<"from class B" << endl;
    }
};
class C:public A{
    public:
    void func3(){
        cout << "from class C"<< endl;
    }
};



int main(){
    A obj1;
    obj1.func();
    B obj2;
    obj2.func();
    C obj3;
    obj3.func();
    obj3.func3();
return 0;
}