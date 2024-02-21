// THIS PROGRAM CONTAINS ENQUEUE,DEQUEUE,PEEK,DISPLAY IN A CIRCULAR QUEUE. 
#include<stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
int delete, i;
void enqueue(int x)
{
    if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else if((rear+1%N)==front)
    {
        printf("OVERFLOW\n");
    }
    else
    {
        rear=((rear+1)%N);
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
    {
         printf("UNDERFLOW\n");
    } 
    else if(front==rear)
    {
        delete=queue[front];
        front=rear=-1;
        printf("%d ""has been deleted.\n",delete);
    }
    else
    {
        delete=queue[front];
        front=(front+1)%N;
        printf("%d ""has been deleted.\n",delete);
    }
}

void display()
{
    i=front;
    if (front==-1&&rear==-1)
    {
        printf("Queue ie empty.");
    }
    else
    {
        printf("Queue is as follow:\n");
        while(i!=rear)
        {   
            printf("%d ",queue[i]);
            i=(i+1)%N;
        }
        printf("%d",queue[rear]);
        printf("\n");
    }     
}
void peek()
    {
        printf("Peek value is:");
        printf("%d \n",queue[front]);
    }

int main()
{
    enqueue(10);
    enqueue(14);
    enqueue(22);
    enqueue(35);
    enqueue(39);
    display();
    dequeue();
    dequeue();
    dequeue();
    peek();
    display();
    enqueue(27);
    enqueue(28);
    enqueue(9);
    display();

    return 0;
} 