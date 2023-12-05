// Stack

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void push(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = No;
    newn -> next = NULL;

    if (*Head == NULL)
    {
        *Head = newn; 
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

int pop(PPNODE Head)
{
    int value = 0;
    PNODE temp = *Head;

    if ( *Head == NULL)
    {
        printf("Stack is empty \n");
        return value;
    }
    else
    {
        value = (*Head) -> data;
        *Head = (*Head) -> next;
        free(temp);
    }

    return value;
}

void Display(PNODE Head)
{

    printf("Elements of stack are : \n");

    while(Head != NULL)
    {
        printf("| %d |\n", Head -> data);
        Head = Head -> next;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    push(&First , 101);
    push(&First , 51);
    push(&First , 21);
    push(&First , 11);

    Display(First);

    iRet = pop(&First);
    printf("Poped element is : %d \n", iRet);

    iRet = pop(&First);
    printf("Poped element is : %d \n", iRet);

    iRet = pop(&First);
    printf("Poped element is : %d \n", iRet);

    

    Display(First);


    return 0;
}