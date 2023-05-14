#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *InsertAtBeg(Node *head, int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
    return head;
}

Node *InsertAtNPosition(Node *head, int data, int n)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next - NULL;
    if (n == 1)
    {
        temp->next = head;
        head = temp;
        return head;
    }
    Node *temp2 = head;
    for (int i = 0; i < n - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp2->next = temp;
    return head;
}

Node *DeleteNode(Node *head, int position)
{
    Node *temp = head;
    if (position == 1)
    {
        head = temp->next;
        return head;
    }
    else
    {
        for (int i = 0; i < position - 2; i++)
        {
            temp = temp->next;
        }
        Node *temp2 = temp->next;
        temp->next = temp2->next;
        free(temp2);
        return head;
    }
}
int Length(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

Node *Reverse(Node *head)
{
    Node *current, *Next, *prev;
    current = head;
    prev = NULL;
    while (current != NULL)
    {
        Next = current->next;
        current->next = prev;
        prev = current;
        current = Next;
    }
    head = prev;

    return head;
}

void Display(Node *head)
{
    cout << "List is: ";
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL; // empty list
    cout << "How many numbers?" << endl;
    int n, i, x, y, c, delposition;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter number ";
        cin >> x;
        head = InsertAtBeg(head, x);
    }
    Display(head);
    cout << "Length of list: " << Length(head) << endl;
    cout << "Enter position and data: ";
    cin >> y >> c;
    head = InsertAtNPosition(head, c, y);
    Display(head);
    cout << endl
         << "Enter position to delete ";
    cin >> delposition;
    head = DeleteNode(head, delposition);
    Display(head);
    cout << endl
         << "Reverse Order: ";
    head = Reverse(head);
    Display(head);
    cout << endl
         << "Original Order: ";
    head = Reverse(head);
    Display(head);
    return 0;
}