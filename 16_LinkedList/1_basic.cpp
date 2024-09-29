#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor used in linked lists......
    Node(int data){
        this->data = data;
        this -> next = NULL;
    }
};

int main(){
    
    Node* node1 = new Node(10);     //creating object
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    
    // Node node2(20);   static allocation not typically used becaz it doesnt lend itself well to creating dynamic structure where nodes
    //are added and removed dynamically......
    // cout << node2.data << endl;
    // cout << node2.next << endl;

return 0;
}