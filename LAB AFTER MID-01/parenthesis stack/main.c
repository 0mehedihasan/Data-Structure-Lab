#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *arr)
{
    if (arr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *arr)
{
    if (arr->top == arr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack* arr, char val)
{
    if(isFull(arr))
    {
        printf("Stack Overflow!\n", val);
    }
    else
    {
        arr->top++;
        arr->arr[arr->top] = val;
    }
}

char pop(struct stack* arr)
{
    if(isEmpty(arr))
    {
        printf("Stack Underflow!\n");
        return -1;
    }
    else
    {
        char val = arr->arr[arr->top];
        arr->top--;
        return val;
    }
}

int parenthesisMatch(char * exp)
{
    struct stack* sp;
    //sp->size = 100;
    int size=strlen(sp);
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));


    for (int i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='(')
        {
            push(sp, '(');
        }
        else if(exp[i]=='{')
        {
            push(sp, '{');
        }
        else  if(exp[i]=='[')
        {
            push(sp, '([');
        }

        else if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
        {
            if(isEmpty(sp))
            {
                return 0;
            }
            else if((pairmatch(pop(sp),exp[i]))==0)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }

    }

    if(isEmpty(sp)==1)
    {
        return 1;
    }

    else
    {
        return 0;
    }

}
int main()
{
    char * exp = "[[{}]";

    if(parenthesisMatch(exp)==1)
    {
        printf("The parenthesis is matching");
    }
    else
    {
        printf("The parenthesis is not matching");
    }
    return 0;
}
int pairmatch(char * exp, char * exp1)
{
    if(exp=='('&&exp1==')')
    {
        return 1;
    }
    else if(exp=='{'&&exp1=='}')
    {
        return 1;
    }
    else  if(exp=='(['&&exp1==']')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
