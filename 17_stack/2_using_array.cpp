#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int n;
    Stack(int n){
        this->n=n;
        arr = new int[n];
        top = -1;
    }

    void push(int val){
        //overflow conditions 
        if(top > n){
            cout << "Stack is full "<< endl;
            return;
        }
        top++;
        arr[top] = val;

    }

    void pop(){
        //underflow conditions 
        if(top == -1){
            cout << " element is not present " << endl;
            return;
        }
        top--;

    }

    void peek(){
        cout<< "top of stack is : "<< arr[top] << endl;
        return;
    }

    void isEmpty(){
        if(top == -1){
            cout << "stack is empty "<< endl;
        }
        else{
            cout << "stack having element "<< endl;
        }
    }
};

int main(){
    Stack st(10);
    st.push(10);
    st.push(20);
    st.push(30);
    st.peek();
    st.pop();
    st.peek();
    st.isEmpty();
return 0;
}