// Prgramme to push an element in the stack using array

#include<stdio.h>

#define Max 7
int stack[Max], Top = -1;

void push_in_stack(int [], int);
void display_stack(int []);

void main()
{
    int value;
    
    printf("Enter the value to be pushed in the stack:");
    scanf("%d", &value);

    push_in_stack(stack, value);

    display_stack(stack);
}

void push_in_stack(int stack[], int value)
{
    if(Top == Max-1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        Top++;
        stack[Top] = value;
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