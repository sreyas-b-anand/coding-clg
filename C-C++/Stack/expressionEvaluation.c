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

        return 0;
    }
    else
    {
        return stack[top--];
    }
}
int evaluate(char postfix[])
{
    int i = 0, result, num, operand1, operand2;

    while (postfix[i] != '\0')
    {
        if (postfix[i] >= '0' && postfix[i] <= '9')
        {
            num = postfix[i] - '0';
            push(num);
        }
        else
        {
            operand1 = pop();
            operand2 = pop();

            switch (postfix[i])
            {
            case '+':
                result = operand2 + operand1;
                break;
            case '-':
                result = operand2 - operand1;
                break;
            case '*':
                result = operand2 * operand1;
                break;
            case '/':
                if (operand1 == 0)
                {
                    printf("Error: Division by zero!\n");
                    return 0;
                }
                result = operand2 / operand1;
                break;
            case '^':
                result = 1;
                for (int j = 0; j < operand1; j++)
                {
                    result *= operand2;
                }
                break;
            }
            push(result);
        }
        i++;
    }
    printf("Result : %d", result);
}
int main()
{
    char expression[20];
    printf("Enter the expression : ");
    fgets(expression, 20, stdin);
    evaluate(expression);
}