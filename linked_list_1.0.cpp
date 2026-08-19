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
    // Allocate memory for nodes 
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth=new Node();

    // Link first and second nodes through link list 
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 45;
    second->next = third;

    // Link third and fourth
    third->data = 32;
    third->next = fourth;

    // Link fourth and NULL 
    fourth->data=49;
    fourth->next=NULL;

    linkedListTraversal(head);

    // Free memory
    delete head;
    delete second;
    delete third;
    delete fourth;

    return 0;
}