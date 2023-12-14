#include<stdio.h>
#include<stdlib.h>
#define sz 5
void main()
{
    
    int s[sz], top=-1, item, ch,i;
    for(; ;)
    printf("enter 1:insert 2:delete 3: dispay else exit\n");
    scanf("%d",&ch);
    switch(ch) 
    {
        case 1: printf("enter item to be inserted\n");
               scanf("%d",&item);
               push(s,&top,item);
               break;
        case 2: printf("enetr item to be deleted\n");
              scanf("%d",&item);
              pop(s,&top);
              break;
        case 3: dispay(s,top);
              break;
        case 4: exit(0);
        }
    }
void push(int s[sz], int *top, int item)
{
    if(*top==sz-1)
    printf("stack overflow\n");
    else
    {
        *top=*top+1;
        s[*top]=item;
    }
}
void pop(int s[sz],int *top)
 {
    if(*top==-1)
    printf("stack underflow\n");
    else{
        printf("item deleted in %d\n",s[*top]);
        *top=*top-1;
        }
    }
    void dispay(int s[sz],int top,int i)
    {
        if (top==-1)
            printf("stack is empty");
        else{
            printf("stack content are\n");
             for(i=0;i<=top;i++)
            printf("%d\n",s[i]);
    }
}
        
