// Program for deletion of a node at given index in a linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
//  Traversal
void traversal(struct Node *ptr)
{
    while (ptr != 0)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *deletion(struct Node *head, int index)
{
    struct Node *ptr=head;
    struct Node* q=head->next;
    for(int i=0;i<index-1;i++)
    {
        ptr=ptr->next;
        q=ptr->next;
    }
    ptr->next=q->next;
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

    head->data = 20;
    head->next = second;

    second->data = 30;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 50;
    fourth->next = NULL;

    printf("Before deletion\n");
    traversal(head);

    head=deletion(head,2);
    printf("After deletion\n");
    traversal(head);
    return 0;

}