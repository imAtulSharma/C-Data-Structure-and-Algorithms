// Prgramme to peek an element in the queue using array

#include<stdio.h>

#define Max 7
int queue[Max], front = -1, rear = -1;

int peek_in_queue();
void display_queue(int []);

void main()
{
    int value;

    // To initialize the queue with some values
    for (int i = 0; i < Max; i++)
    {   
        rear++;
        queue[rear] = (i+2)*(i+2);
        if(front == -1)
        {
            front = 0;
        }
    }
    
    printf("After deletion in the Queue:\n");

    value = peek_in_queue();

    if(value != -1)
    {
        printf("The value in the queue is %d", value);
    }
}

int peek_in_queue()
{   
    if(front == -1 || front > rear)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        return queue[front];
    }
}

void display_queue(int queue[])
{
    if(rear == -1)
    {
        printf("Queue is empty\n");
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