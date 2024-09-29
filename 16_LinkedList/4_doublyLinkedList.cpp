#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*prev;
    Node* next;

    Node(int data){
        this-> data = data;
        this->prev = NULL;
        this->next =NULL;
    }
    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory from for node with data "<< val <<endl;
    }
    
};

void print(Node* head,Node* tail){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;

    }    
   
    cout << endl;
}

int getLengthNode(Node* head){
    int len = 0;
    Node* temp = head ;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }

    return len;
}

void insertAtHead(Node* &tail,Node* &head,int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        temp -> next = head;
        head ->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

void insetAtpostition(Node* &tail,Node* &head,int position,int d){
     if(position == 1){
        insertAtHead(tail,head,d);
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
        insertAtTail(head,tail,d);
        return;
    }
    //creating a node 
    Node* node=new Node(d);
    node->next = temp->next;
    temp->next-> prev = node; 
    temp->next = node;
    node->prev = temp;
}


void deleteNode(int position,Node* &head){
    //front node
    if(position == 1){
        Node* temp = head;
        temp ->next -> prev =NULL;
        head = temp ->next;
        temp ->next = NULL;
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
    curr ->prev = NULL;
    prev->next= curr->next;
    curr -> next =NULL;
    delete curr;
}
}

int main(){
    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    print(head,tail);

    cout << getLengthNode(head) << endl;

    insertAtHead(tail,head,11);
    print(head,tail);

    cout << getLengthNode(head) << endl;

    insertAtTail(head,tail,25);
    print(head,tail);
 
    
    insetAtpostition(tail,head,2,60);
    print(head,tail);
   
    //deleting at any position 
    deleteNode(2,head);
    print(head,tail);
return 0;
}