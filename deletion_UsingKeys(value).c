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

struct Node *deleteValue(struct Node *head,int value)
// {
//     struct Node*p=head;

//     while(p->next->data!=value){
//         p=p->next;
//     }
//     struct Node*q=p->next;
//     p->next=q->next;
//     free(q);
//     return head;
// }
{
struct Node *p =head;
struct Node*q=head->next;
while (q->data!=value &&q->next!=NULL){
    p=p->next;
    q=q->next;
}  //check if the value is there 
if(q->data==value){
p->next=q->next;
free(q);
 }
else{
        printf("no key found %d",value);
    }
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
    third->data = 3;
    fourth->data = 58;

    // Link nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    printf("Before Deletion:\n");
    linkedlistTraversal(head);

   
    head = deleteValue(head,78);

    printf("\nAfter Deletion:\n");
    linkedlistTraversal(head);

    return 0;
}