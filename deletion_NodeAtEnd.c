#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to traverse the linked list
void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Function to delete a node at a given index (0-based indexing)
struct Node *deleteAtEnd(struct Node *head)
{
    struct Node*p=head;
    struct Node*q=p->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}


int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Assign data
    head->data = 7;
    second->data = 45;
    third->data = 32;
    fourth->data = 58;

    // Link nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    printf("Before Deletion:\n");
    linkedlistTraversal(head);

   
    head = deleteAtEnd(head);

    printf("\nAfter Deletion:\n");
    linkedlistTraversal(head);

    return 0;
}