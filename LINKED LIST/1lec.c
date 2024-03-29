// Traversal of a linked list.
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node *ptr )
{
    while(ptr != NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocate memory for nodes in linked list in heap.
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    // Link first node to second.
    head->data=7;
    head->next= second;

    // Link second node to third node,
    second-> data=11;
    second->next= third;

    // Terminate third node.
    third->data=39;
    third->next=NULL;

    linkedlistTraversal(head);
    return 0;

}