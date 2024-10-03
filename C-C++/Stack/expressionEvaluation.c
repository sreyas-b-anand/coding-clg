#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int top = -1;
int stack[MAX];

int isFull()
{
    return (top == MAX - 1);
}

int isEmpty()
{
    return (top == -1);
}

void push(int data)
{
    if (isFull())
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        stack[++top] = data;
    }
}

int pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow!\n");
        return 0;
    }
    else
    {
        return stack[top--];
    }
}
int evaluate(char postfix[]){
    int i =0 ;
    while(postfix[i] != '\0')
    {
        
    }
}
