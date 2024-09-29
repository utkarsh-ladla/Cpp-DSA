#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout << "from class A" << endl;
    }
};
class B{
    public:
    void func(){
        cout <<"from class B" << endl;
    }
};
class C:public A,public B{
    public:
    void func3(){
        cout << "from class C"<< endl;
    }
};



int main(){

    C obj1;
    obj1.A::func();    //using scope resolution operator......
    

return 0;
}