#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
};
Node *head;
Node *CreateNode(int x)
{
    Node *myNode = new Node();
    myNode->data = x;
    myNode->next = NULL;
    myNode->prev = NULL;
    return myNode;
}
void InsertAtHead(int x)
{
    Node *temp = CreateNode(x);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    temp->next = head;
    head = temp;
}
void DisplayList()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    head = NULL;
    InsertAtHead(1);
    InsertAtHead(2);
    DisplayList();
    return 0;
}