// Prgramme to pop an element in the queue using array

#include<stdio.h>

#define Max 7
int queue[Max], front = -1, rear = -1;

void pop_in_queue(int []);
void display_queue(int []);

void main()
{
    // To initialize the queue with some values
    for (int i = 0; i < Max; i++)
    {   
        rear++;
        queue[rear] = i+1;
        if(front == -1)
        {
            front = 0;
        }
    }
    

    printf("After deletion in the Queue:\n");
    pop_in_queue(queue);
    display_queue(queue);
}

void pop_in_queue(int queue[])
{
    if(front == -1 || front > rear)
    {
        printf("Queue underflow\n");
    }
    else
    {
        front++;
    }
}

void display_queue(int queue[])
{
    if(rear == -1)
    {
        printf("Queue is Underflow\n");
    }
    else
    {
        printf("The Queue is the following...\n[");    
        for (int i = front; i <= rear; i++)
        {
            printf("%d, ", queue[i]);
        }
        printf("\b\b]\n");
    }
    // printf("The top is at %d\n", rear);
}