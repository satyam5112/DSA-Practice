// Program for deletion of a node at given index in a linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void traversal(struct Node *head)
{
    struct Node *p = head;
    do
    {
        printf("Element: %d\n", p->data);
        p = p->next;
    } while (p != head);
}

struct Node* deletion(struct Node* head,int index)
{
    int ind=index;
    struct Node* p=head;
    struct Node* q=head->next;
    for(int i=0;i<ind-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    struct Node* temp=q;
    p->next=temp->next;
    free(temp);
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
    fourth->next = head;

    printf("Before Deletion\n");
    traversal(head);
    printf("After Deletion\n");
    head = deletion(head,2);
    traversal(head);
    return 0;
}