#include<iostream>
using namespace std;
 struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node* temp=head;
        int cnt0=0,cnt1=0,cnt2=0;
        
        while(temp!=NULL){
            if(temp->data==0) cnt0++;
            else if(temp->data == 1)cnt1++;
            else cnt2++;
            
            temp = temp->next;
        }
        temp = head;
        while(temp!=NULL){
            if(cnt0){
                temp -> data = 0;
                cnt0--;
            }
            else if(cnt1){
                temp->data = 1;
                cnt1--;
            }
            else{
                temp->data = 2;
                cnt2--;
            }
        }
        return head;
    }
};



int main(){
    
return 0;
}