#include <stdio.h>
#include <stdlib.h>
#define max_size 5
int stack[max_size], top =-1;
void push();
void pop();
void display();


void main()
{
    int choice;
    while(1)
    {
        printf("1: Push\t2: Pop\t3: Display\t4: Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid Choice\n");

        }
    }
}
void push()
{
    int x;
    if (top == max_size -1)
    {
        printf("\nOVERFLOW!!\n");
    }
    else
    {
        printf("\nEnter the element to be added: ");
        scanf("%d",&x);
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\nUNDERFLOW !!\n");
    }
    else
    {
        printf("\n Element popped: %d\n", stack[top]);
        top--;
    }
}
void display()
{
    if (top == -1)
    {
        printf("\n UNDERFLOW !!\n");

    }
    else
    {
        printf("\nElements present in stack: \n");
        for (int i = top; i>=0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
