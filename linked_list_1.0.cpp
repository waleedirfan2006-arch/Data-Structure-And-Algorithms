#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void linkedListTraversal(Node* ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
   
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth=new Node();


    head->data = 7;
    head->next = second;


    second->data = 45;
    second->next = third;

    third->data = 32;
    third->next = fourth;


    fourth->data=49;
    fourth->next=NULL;

    linkedListTraversal(head);


    delete head;
    delete second;
    delete third;
    delete fourth;

    return 0;
}
