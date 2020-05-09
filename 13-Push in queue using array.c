// Prgramme to push an element in the queue using array

#include<stdio.h>

#define Max 7
int queue[Max], front = -1, rear = -1;

void push_in_queue(int [], int);
void display_queue(int []);

void main()
{
    int value;
    
    printf("Enter the value to be pushed in the stack:");
    scanf("%d", &value);

    push_in_queue(queue, value);

    display_queue(queue);
}

void push_in_queue(int queue[], int value)
{
    if(rear == Max-1)
    {
        printf("Queue overflow\n");
    }
    else
    {
        front = 0;
        rear++;
        queue[rear] = value;
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