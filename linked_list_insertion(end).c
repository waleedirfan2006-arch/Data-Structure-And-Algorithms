#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

// insert at beginning function
struct Node*insertAtEnd(struct Node*head,int data){
    struct Node *ptr=(struct Node* )malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr; 
    ptr->next=NULL;
    return head;
  
}
int main()
{
    struct Node *head;
    // allocate memory for nodes in LL in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second;
    second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third;
    third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth;
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // link first and second nodes
    head->data = 7;
    head->next = second;
    // link second and third nodes
    second->data = 45;
    second->next = third;
    // link third and fourth nodes
    third->data = 32;
    third->next = fourth;

    fourth->data = 58;
    fourth->next = NULL;

    printf("Before insertion:\n");
    linkedlistTraversal(head);

    head=insertAtEnd(head,67);
    printf("after insertion at end\n");
    linkedlistTraversal(head);

    



   
  
    return 0;
}