// THIS PROGRAM CONTAINS ENQUEUE,DEQUEUE,PEEK,DISPLAY IN A QUEUE.
#include <stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
int delete, i;
void enqueue(int x)
{
    if (rear == N - 1)
    {
        printf("OVERFLOW\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = queue[0];
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("UNDERFLOW\n");
    }
    else if (front == rear)
    {
        delete = queue[front];
        front = rear = -1;
        printf("%d has been deleted.\n",delete);
    }
    else
    {
        delete = queue[front];
        front++;
        printf("%d has been deleted.\n",delete);
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue is as follow:\n");
        for (i = front; i < rear + 1; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty.\n");
    }
    else if (front == 0 && rear == 0)
    {
        printf("Peek element is:");
        printf("%d \n",queue[front]);
    }
    else
    {
        printf("Peek element is:");
        printf("%d \n", queue[front]);
    }
    
}
void lastval()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue is empty.\n");
    }
    else if (front == 0 && rear == 0)
    {
        printf("Last element is: \n");
        printf("%d \n",queue[front]);
    }
    else
    {
        printf("Last element is: \n");
        printf("%d \n", queue[rear]);
    }
}
int main()
{
    enqueue(10);
    enqueue(43);
    enqueue(39);
    enqueue(35);
    dequeue();
    dequeue();
    peek();
    display();
    enqueue(14);
// Element below thhis will not be pushed in queue ,since queue is reached to its maximum size.
// To push more elements increase the size of queeue in above code.
    enqueue(22);
    enqueue(9);
    peek();
    lastval();
    display();

    return 0;
}