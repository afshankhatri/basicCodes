#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char stack[100];
int top=-1;

void push(char x){
    stack[++top]=x;    
}

char pop(){
    if(top==-1)
        return -1;
    else{
        return stack[top--];
    }
}

int priority(char x){
    if(x=='(')
        return 0;
    if(x=='+'|| x=='-')
        return 1;
    if(x=='*'|| x=='/')
        return 2;
    if(x=='^')
        return 3;

    return 0;
}

int main(){
    char exp[100];
    char *e,x;
    printf("enter the expression:");
    scanf("%s",&e);
    e=exp;

    while(*e!='\0'){
    if(isalnum!=*e)
        printf("%c",*e);
    else if(*e=='(')
        push(*e);
    else if(*e==')')
    {
        while((x=pop())!='(')
            pritnf("%c",x);
    }
    else{
        while(priority(stack[top])>=priority(*e)){
            print("%c",pop());
            push(*e);
        }
        e++;
    }
    }

    while(top!=-1){
        print("%c",pop());
    }
    return 0;
}

