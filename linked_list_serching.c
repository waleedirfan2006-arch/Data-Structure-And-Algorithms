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
    void searching(struct Node*head,int key ){
        int position=1;
        while(head!=NULL){
            if(head->data==key){
                printf("Element Found At Index %d ",position);
                  
            }
            position++;
            head=head->next;
        }
        printf("Element Not Found In This Link List ");
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
        // link fourth and NULL node 
        fourth->data = 58;
        fourth->next = NULL;
    
        searching(head,32);
        return 0;
    }
// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void linkedlistTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element:%d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

// // FIX 1: Changed return type to void and added a 'return' statement to stop execution when found
// void searching(struct Node* head, int key ){
//     int position = 1;
//     while(head != NULL){
//         if(head->data == key){
//             printf("Element Found At Index %d \n", position);
//             return; // Exit the function so it doesn't print "Not Found"
//         }
//         position++;
//         head = head->next;
//     }
//     printf("Element Not Found In This Link List \n");
// }

// int main()
// {
//     struct Node *head;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *second;
//     second = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *third;
//     third = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *fourth;
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 7;
//     head->next = second;
    
//     second->data = 45;
//     second->next = third;
    
//     third->data = 32;
//     third->next = fourth;
    
//     fourth->data = 58;
//     fourth->next = NULL;
   
//     // FIX 2: Removed "head =" assignment to prevent corrupting the head pointer
//     searching(head, 32);

//     // Free allocated memory (Good practice)
//     free(head);
//     free(second);
//     free(third);
//     free(fourth);

//     return 0;
// }
