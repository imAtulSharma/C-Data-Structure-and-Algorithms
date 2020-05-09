// Prgramme to Pop an element in the stack using array

#include<stdio.h>

#define Max 7
int stack[Max], Top = -1; 

void pop_in_stack(int []);
void display_stack(int []);

void main()
{
    // To initialize the stack with some values
    for (int i = 0; i < Max; i++)
    {
        Top++;
        stack[i] = i+1;
    }

    display_stack(stack);
    pop_in_stack(stack);

    printf("After deletion of the top...");
    display_stack(stack);
}

void pop_in_stack(int stack[])
{
    if(Top == -1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        Top --;
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