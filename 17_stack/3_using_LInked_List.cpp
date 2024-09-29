#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};

class stack{
    node *top;
    int size;
    public:
    stack(){
        top = NULL;
        size = 0;
    }

    void push(int data){
        node *temp = new node();
        temp -> data = data;
        temp->next = top;
        top = temp;
        size++;
        cout << "element added in stack is "<< data << endl;
    }

    void pop(){
        //underflow
        if(top == NULL){
            cout<<"empty stack"<<endl;
		    return;
        }
        node* temp = top;
        temp = top;
        top = top->next;
        cout << "element is deleted is "<< temp->data<< endl;
        delete temp;
    }

    void peek(){
        if(top == NULL){
            cout<<"empty stack"<<endl;
		    return;
        }

        cout << top->data << endl;
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.pop();
    s.peek();


return 0;
}