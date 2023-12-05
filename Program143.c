// Queue

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

// Void insertLast
void Enqueue(PPNODE Head , int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {   
        while(temp -> next != NULL)
        {
            temp = temp -> next;     
        }
        temp -> next = newn;
    }
}

int Dequeue(PPNODE Head)
{
    int value = 0;
    PNODE temp = *Head;

    if (*Head == NULL)
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
    printf("\n");
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    Enqueue(&First , 11);
    Enqueue(&First , 21);
    Enqueue(&First , 51);
    Enqueue(&First , 101);
    Enqueue(&First , 111);

    Display(First);

    iRet =  Dequeue(&First);
    printf("Remove element from queue is : %d \n", iRet);

    iRet =  Dequeue(&First);
    printf("Remove element from queue is : %d \n", iRet);


    Display(First);

    return 0;
}