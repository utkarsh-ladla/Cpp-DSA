//function overloading......

#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout << "Hello Utkarsh "<< endl;
    }
    int sayHello(string name, int n){
        cout << "Hello you "<< endl;
        return n;
    }
    void sayHello(string name){
        cout << "HELLO" << name << endl;
    }
};
int main(){
    A is_object;
    is_object.sayHello();
    is_object.sayHello(" utkarsh");
    is_object.sayHello("Utkarsh",5);
return 0;
}