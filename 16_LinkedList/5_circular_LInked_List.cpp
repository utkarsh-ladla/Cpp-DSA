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
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
        delete next;
        next = NULL;
        }
        cout << "memory from for node with data "<< value <<endl;
    }

};

void insertNode(Node* &tail,int element,int data){

    //assuming that the element present in the list
    if(tail == NULL){
        Node* newnode = new Node(data);
        tail = newnode;
        newnode -> next = newnode;
    }
    else{
    //for non empty list 
    // assuming that the element is present in hte list

    Node* curr = tail;

    while (curr->data != element)
    {
        curr= curr -> next;
    }
    //element founded => curr is representing element
    Node* temp = new Node(data);
    temp ->next =  curr -> next;
    curr->next = temp;
    
    }

}

void print(Node*tail){
    Node* temp = tail;
    do{
    cout << tail ->data << " ";
    tail = tail -> next;
    }
    while (tail -> next != temp);
    cout << endl;

}

void deleteNode(Node* tail,int value){
    //empty list
    if(tail == NULL){
        cout << "List is empty" << endl;
    return;
    }
    else{
        //nonj-empty


        //assuming that value is present in linked list 
        Node* prev = tail;
        Node* curr = prev ->next;
        while(curr->data != value){
            prev = curr;
            curr -> next = NULL;
        }
    prev -> next = curr ->next;
    if(tail == curr){
        tail = prev;
    }
    curr -> next=NULL;
    delete curr;
    }
}
int main(){

    Node* tail = nullptr;
    //for empty list 
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,5,9);
    print(tail);

    insertNode(tail,9,6);
    print(tail);

    insertNode(tail,3,4);
    print(tail);

    deleteNode(tail,3);
    print(tail);

    deleteNode(tail,9);   
    print(tail);

    
return 0;
}