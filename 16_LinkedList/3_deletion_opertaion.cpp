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

    //destructtor 
};

void insertAtHead(Node* &head,int d){  //reference beacuse we want change in original linked list

    //creating new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}

void insertAtTail(Node* &tail,int d){
    //new node 
    Node* temp = new Node(d);
    //travering tail pointer 
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail,Node* &head,int position,int d){
    if(position == 1){
        insertAtHead(head,d);
        return;
    }

    
    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    //inserting at last position 
    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
    }
    //creating a node 
    Node* node=new Node(d);
    node->next = temp->next;
    temp->next = node;
  
}


//deletion from begining
void deleteAtHead(Node* &head) {
    if (head == nullptr) {
        return; // Nothing to delete
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}
void deleteAtEnd(Node* &head){
    if(head == NULL || head->next ==NULL){
        delete head;
        head = NULL;
        return;
    }
    Node* secondLast =head;
    while(secondLast->next->next != NULL){
        secondLast -secondLast->next;
    }
    delete secondLast->next;
    secondLast->next=NULL;
    
}

void deleteNode(int position,Node* &head){
    //front node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    else{
        //deleting any middle node or last node 
    Node* curr= head;
    Node* prev =NULL;

    int cnt = 1;
    while(cnt<position){
    prev = curr;
    curr = curr->next;
    cnt++;
    }
    //middle node
    prev->next= curr->next;
    delete curr;
}
}

void print(Node* &head){
    //traversing all above the linkedlist ....
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data<< " ";
        temp = temp->next;
    }
    cout << endl;
}


int main(){
    
    Node* node1 = new Node(10);     //creating object
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    Node* head = node1;  //head pointed to node 1
    Node* tail = node1; 
    print(head);

    // insertAtHead(head,12);
     insertAtTail(tail,12);

    print(head);

    insertAtPosition(tail,head,3,13);
    print(head);

    // insertAtHead(head,16);
    insertAtTail(tail,16);

    print(head);

    // deleteAtHead(head);
    // deleteAtEnd(head);
    deleteNode(4,head);
    print(head);

    

return 0;
}