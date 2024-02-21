#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Overflow");
        return;
    }
    top++;
    stack[top] = value;
}

int pop()
{
    if (top == -1)
    {
        printf("Underflow");
        return -1;
    }
    else
    {
        int x = stack[top];
        top = top - 1;
        return x;
    }
}
void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    int choice, value, i, x;

    while (1)
    {
        printf("1. Push 2. Pop 3. Display 4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;

        case 2:

            x = stack[top];
            pop();
            printf("Popped element is: %d \n", x);
            break;

        case 3:

            display();
            break;
        case 4:

            exit(0);

        default:
            printf("Invalid Input");
        }
    }
    return 0;
}