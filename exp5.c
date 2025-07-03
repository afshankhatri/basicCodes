#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void enQueue(int);
void deQueue();
void display();

int front=-1,rear=-1,cQueue[SIZE];

void main(){
    int choice;
    int val;

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
    if((front = rear+1) || (front ==0 && rear==SIZE-1)){
        printf("full");
    }
    else{
        if(front ==-1 && rear==-1){
            front=rear=0;
        }
        else if(rear==SIZE-1 && front !=0){
            rear=0;
        }
        else{
            rear++;
            cQueue[rear]=val;
            printf("inserted");
        }
    }
}

void deQueue(){
    if(front==-1 && rear==-1){
        printf("empty");
    }
        else{
            printf("deleted %d:",cQueue[front]);
            if(front==rear){
                front=rear=-1;
            }
            else {
                if(front==SIZE-1){
                    front=0;
                }
                else{
                    front = front +1;
                }
            }
        }
    }

    void display(){
        if(front==-1){
            printf("queue is empty");
        }
        else{
            printf("elements are:");
            if(rear>=front){
                for(int i=front;i<=rear;i++){
                    printf(cQueue[i]);
                }
            }
            else{
                for(int i=front;i<SIZE;i++){
                    printf("%d",cQueue[i]);
                }
                for(int i=0;i<=rear;i++){
                    printf("%d",cQueue[i]);
                }
            }
        }
    }


