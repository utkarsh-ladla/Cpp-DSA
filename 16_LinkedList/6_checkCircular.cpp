#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

bool isCircular(Node *head)
{
    // Write your code here.
    Node *temp = head->next;
    if (head == NULL)
    {
        return 1;
    }

    while (temp != NULL || temp != head)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return 0;
    }
    return 1;
}
int main()
{
    Node* head =NULL;

    return 0;
}