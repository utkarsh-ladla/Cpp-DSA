#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack<int> s;
    //inserting element in stack....
    s.push(10);
    s.push(20);
    s.push(30);

    //delelting element in stack
    s.pop();

    //seeing the top of element in stack
    cout << "top of element in stack " << s.top()<< endl;

    //size of stack current present 
    cout << "size of stack is "<< s.size()<<endl;
    
return 0;
}