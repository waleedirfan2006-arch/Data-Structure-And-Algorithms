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

void bubbleSort(struct Node *head)
{
    struct Node *i, *j;
    int temp;

    for (i = head; i != NULL; i = i->next)
    {
        for (j = i->next; j != NULL; j = j->next)
        {
            if (i->data > j->data)
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
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
    head->data = 75;
    head->next = second;
    // link second and third nodes
    second->data = 4;
    second->next = third;
    // link third and fourth nodes
    third->data = 43;
    third->next = fourth;

    fourth->data = 51;
    fourth->next = NULL;
    printf("before sort");
    linkedlistTraversal(head);
    bubbleSort(head);
    printf("after sort ");
    linkedlistTraversal(head);
    return 0;
}