#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int stack[SIZE], top=-1;

void push(int);
void pop();
void display();

void main()
{
    int val,choice;


    while(1)
    {
    printf("\n*****MENU*****\n");
    printf("1.push\n2.pop\n3.display\n4.Exit");
    printf("\nEnter choice:\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: printf("Enter val");
            scanf("%d",&val);
            push(val);
            break;
        case 2: pop();
            break;
        case 3: display();
            break;
        case 4: exit(0);
        default: printf("Wrong Selection");
    }
    }
}

void push(int val)
{
    if(top==SIZE-1)
    {
        printf("oveflow");
    }
    else{
        top++;
        stack[top]=val;
        printf("inserted");
    }
}

void pop()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else{
        printf("popped element is %d",stack[top]);
        top--;
    }
}

void display()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else{

        printf("elements are:");
        for(int i = top; i>=0; i--)
        {
            printf("%d",stack[i]);
        }
    }
}   