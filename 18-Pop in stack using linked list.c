// Prgramme to pop an element in the stack using linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

struct node * stack = NULL, *Top = NULL;

void push_in_stack(int);
void display_stack(struct node *);
void pop_in_stack();

void main()
{
    push_in_stack(89);
    push_in_stack(654);
    push_in_stack(658);

    display_stack(stack);

    pop_in_stack();

    display_stack(stack);

    push_in_stack(543);
    push_in_stack(56);

    display_stack(stack);
}

void push_in_stack(int value)
{
    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = value;
    new_node -> next = NULL;

    if(Top == NULL)
    {
        Top = new_node;
        stack = Top;
    }
    else
    {
        Top -> next = new_node;
        Top = new_node;
    }
}

void pop_in_stack() 
{
    struct node * preptr , *ptr = stack;
    preptr = ptr;

    if(Top == NULL)
    {
        printf("Stack underflow\n");
    }
    else
    {
        while(ptr -> next != NULL)
        {
            preptr = ptr;
            ptr = ptr -> next;
        }

        if(preptr == ptr)
        {
            Top = NULL;
        }
        else
        {
            Top = preptr;
            Top -> next = NULL;
        }

        // Alternative method to do the same work

        // preptr -> next = NULL;
        // if(preptr == ptr)
        // {
        //     preptr = NULL;
        // }
        // Top = preptr;
    }
}

void display_stack(struct node * ptr)
{
    if(Top == NULL)
    {
        printf("Stack is empty\n");
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