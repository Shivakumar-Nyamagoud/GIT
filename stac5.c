#include<stdio.h>
void push();
void pop();
void display();
#define count 6
int top=-1,arr[count];
void push(){
    int x;
    if(top==count-1){
        printf("stack overflow");
    }
    else{
        printf("enter the number");
        scanf("%d",&x);
        top++;
        arr[top]=x;
    }
void pop(){
    if(top==-1){
        printf("stack underflow")
    }
    else{
        printf("%d",arr[top]);
        top--;
    }

}
void dispaly(){
    while(top>-1){
        printf("%d",arr[top]);
        top--;
    }
}
int main(){
    int choice;
    while(1){
        printf("\n 1=push \n 2=pop \n 3=display \n 4=exit ln");
        scanf("%d",&choice);
        switch(choice){
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
            return 0;
            default:
            printf("invalid input")
            
        }
        }
    }

