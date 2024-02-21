// Program for deletion of first node in linked list.
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
struct Node *deletion(struct Node *head)
{
    struct Node *p = head;
    p = p->next;
    while (p->next != head)
    {
        p = p->next;
    }

    struct Node *ptr = p->next;
    p->next = ptr->next;
    free(ptr);
    ptr = NULL;
    return p->next;
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
    head = deletion(head);
    traversal(head);
    return 0;
}