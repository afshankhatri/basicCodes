#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int queue[SIZE], front=-1,rear=-1;

void enQueue(int);
void deQueue();
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
            enQueue(val);
            break;
        case 2: deQueue();
            break;
        case 3: display();
            break;
        case 4: exit(0);
        default: printf("Wrong Selection");
    }
    }
}

void enQueue(int val){
    if(rear==SIZE-1) 
    {
        printf("full");
    }
    else
    {
        if(front==-1)
            front=0;
        rear++;
        queue[rear]=val;
        printf("inserted");

    }
}

void deQueue()
{
    if(front >rear  || front ==-1 && rear==-1)
    {
        printf("empty");
    }
    else
    {
        printf("deleted:%d",queue[front]);
        front++;
        if(front>rear)
            front=rear=-1;
    }
}

void display()
{
    if(front >rear  || front ==-1 && rear==-1)
    {
        printf("empty");
    }
    else
    {
        printf("elements are:");
        for(int i=front;i<=rear;i++)
        {
            printf("%d",queue[i]);
        }
    }
}