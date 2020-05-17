// Prgramme to Peek an element in the stack using array

#include<stdio.h>

#define Max 7
int stack[Max], Top = -1;

int peek_in_stack();
void display_stack(int []);

void main()
{   
    int value;

    // To initialize the stack with some values
    for (int i = 0; i < Max; i++)
    {
        Top++;
        stack[i] = i+1;
    }

    display_stack(stack);

    value = peek_in_stack();

    if(value != -1)
    {
        printf("The top most element in the stack is %d", value);
    }
}

int peek_in_stack()
{   
    if(Top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        return stack[Top];
    }
}

void display_stack(int stack[])
{
    if(Top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The Stack is the following...\n[");    
        for (int i = 0; i <= Top; i++)
        {
            printf("%d, ", stack[i]);
        }
        printf("\b\b]\n");
    }
    printf("The top is at %d\n", Top);
}