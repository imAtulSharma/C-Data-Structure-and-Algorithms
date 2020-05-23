// Simply inserting node before a given node from a linked list

#include<stdio.h>
#include<stdlib.h>

struct node *start;

struct node
{
    int roll;
    struct node *next;
};

struct node * create_linked_list(struct node *);
void display(struct node *);
struct node * insert_node_before(struct node *);


void main()
{    
    int roll, value;
    
    printf("Enter negative number to stop\n");
    printf("Enter roll number\n");
    scanf("%d", &roll);
    
    if(roll < 0)
    {
        printf("You have canceled\n");
    }
    
    else
    {   
        start = (struct node *) malloc(sizeof(struct node));

        if(start == NULL)
        {
            printf("Unable to make linked list due to no space in heap\n");//When there is no free space in heap is left for memory allocation
        }
        else
        {
            start -> roll = roll;
            
            create_linked_list(start);
            display(start);

            start = insert_node_before(start);
            
            printf("After modifying the list we get:\n");
            display(start);
        }
    }
}

struct node * create_linked_list(struct node *ptr)
{
    struct node *new_node;
    static int count = 1, roll;        
        
    printf("Enter negative number to stop\n");
    printf("Enter roll number\n");
    scanf("%d", &roll);
            
    if (roll < 0)//if user not want to create list, so here we don not waste any kind of memory
    {

        goto End;
    }

    else
    {
        new_node = (struct node *) malloc(sizeof(struct node));

        if(new_node == NULL)
        {
            printf("No more space in heap\n");//When there is no free space in heap is left for memory allocation
                
            goto End;
        }

        else
        {
            ptr -> next = new_node;
            ptr = ptr -> next;

            ptr -> roll = roll;
            count++;
            
            return create_linked_list(ptr);
        }
    }
    End:
    ptr -> next = NULL;
    printf("Hurray! You have made %d insertion successfully in the linked list\n", count);
}

void display(struct node *ptr)
{
    printf("The list is the following...\n");

    do
    {
        printf("%d ", ptr -> roll);
        ptr = ptr -> next;
    }while (ptr -> next != NULL);

    printf("%d ", ptr -> roll);
}

struct node * insert_node_before(struct node * ptr)
{
    struct node * new_node = (struct node *)malloc(sizeof(struct node)), * preptr = ptr, *temp = ptr;
    int value, number;
    
    printf("\nBefore which value you want to insert the node\n");
    scanf("%d", &value);

    while (ptr -> next != NULL)
    {
        if(ptr -> roll == value) 
        {
            break;
        }

        preptr = ptr;
        ptr = ptr -> next;
    }
    
    printf("Enter the number you want to insert\n");
    scanf("%d", &number);

    new_node -> roll = number;
    new_node -> next = ptr;

    if(ptr == preptr){
        return new_node;
    }
    else
    {
        preptr -> next = new_node;
        return temp;
    }
}