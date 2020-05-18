// Prgramme to pop an element in the queue using linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

struct node * queue, *front = NULL, * rear = NULL;

void push_in_queue(int);
void pop_in_queue();
void display_queue(struct node *);

void main()
{
    push_in_queue(95);
    push_in_queue(435);
    push_in_queue(46);
    push_in_queue(567);

    display_queue(queue);

    pop_in_queue();

    display_queue(queue);
}

void push_in_queue(int value)
{
    struct node * new_node = (struct node *)malloc(sizeof(struct node *));
    new_node -> data = value;
    new_node -> next = NULL;

    if(rear == NULL)
    {
        rear = new_node;
        front = rear;
        queue = front;
    }
    else
    {
        rear -> next = new_node;
        rear = new_node;
    }
}

void display_queue(struct node *ptr)
{
    if(rear == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        while(ptr -> next != NULL)
        {
            printf("%d ", ptr -> data);
            ptr = ptr -> next;
        }
        printf("%d\n", ptr -> data);
    }
}

void pop_in_queue()
{
    if(front == NULL)
    {
        printf("Stack underflow\n");
    }
    else
    {
        queue = front -> next;
        front = queue;
    }
}