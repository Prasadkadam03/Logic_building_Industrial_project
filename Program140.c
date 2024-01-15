// Circular linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

}NODE, *PNODE, **PPNODE;        // #

void InsertFirst(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = No;
    newn -> next = NULL;

    if ((*Head == NULL) && (*Tail == NULL) )
    {
        *Head = newn;
        *Tail = newn;
    }
    else 
    {
        newn -> next = *Head;
        *Head = newn;   
    }
    (*Tail) -> next = *Head;

}

void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = No;
    newn -> next = NULL;

    if ((*Head == NULL) && (*Tail == NULL) )
    {
        *Head = newn;
        *Tail = newn;
        (*Tail) -> next = *Head;
    }
    else 
    {
        (*Tail) -> next = newn;
        *Tail = newn;
        (*Tail) -> next = *Head;
    }
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if ((*Head == NULL) && (*Tail == NULL) )
    {
        return;
    }
    else if (*Head == *Tail)
    {
        free(*Head);
        *Head = NULL; 
        *Tail = NULL;
    }
    else
    {
        (*Head) = (*Head) ->  next;
        free((*Tail) -> next);
        (*Tail) -> next = *Head;
    }


}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    PNODE temp = *Head;

    if ((*Head == NULL) && (*Tail == NULL) )
    {
        return;
    }
    else if (*Head == *Tail)
    {
        free(*Head);
        *Head = NULL; 
        *Tail = NULL;
    }
    else
    {
        while(temp -> next != *Tail)
        {
            temp = temp -> next;
        }

        free(*Tail);
        *Tail = temp;
        (*Tail)-> next = *Head;
    }
}


void Display(PNODE Head, PNODE Tail)
{
    printf("\n Linked List is: \n");

    if((Head != NULL) && (Tail != NULL) )
    {
        do
        {
            printf("| %d | ->" ,Head -> data);
            Head = Head ->next;

        }while(Head != Tail -> next);
    }

    printf(" Address of First node \n");

}

int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;
    if((Head != NULL) && (Tail != NULL) )
    {
        do
        {
            iCnt++;
            Head = Head ->next;

        }while(Head != Tail -> next);
    }

    return iCnt;
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int No, int iPos)
{
    int size = Count(*Head , *Tail);
    int i = 0;

    PNODE newn = NULL;

    PNODE temp = *Head;

    if ((iPos < 1) || (iPos > size+1))
    {
        printf("Invalid position\n");
    }

    if(iPos == 1)
    {
        InsertFirst(Head, Tail, No);
    }
    else if(iPos == size+1)
    {
        InsertLast(Head, Tail, No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn -> data = No;
        newn -> next = NULL;

        for(i = 1; i<iPos-1; i++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;
    }
}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{
    int size = Count(*Head , *Tail);
    int i = 0;
    PNODE targetednode = NULL;

    PNODE temp = *Head;

    if ((iPos < 1) || (iPos > size))
    {
        printf("Invalid position\n");
    }

    if(iPos == 1)
    {
        DeleteFirst(Head, Tail);
    }
    else if(iPos == size)
    {
        DeleteLast(Head, Tail);
    }
    else
    {
        for(i = 1; i<iPos-1; i++)
        {
            temp = temp -> next;
        }
        targetednode = temp -> next;
        temp -> next = temp -> next -> next;
        free(targetednode);

    }
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;  
    int iRet = 0;        // #

    InsertFirst(&First, &Last, 51);
    InsertFirst(&First, &Last, 21);
    InsertFirst(&First, &Last, 11);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of elements are : %d\n",iRet);

    InsertLast(&First, &Last, 111);
    InsertLast(&First, &Last, 101);
    InsertLast(&First, &Last, 121);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of elements are : %d\n",iRet);

    InsertAtPos(&First, &Last , 105 , 5);
    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of elements are : %d\n",iRet);
    
    DeleteAtPos(&First, &Last , 5);
    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of elements are : %d\n",iRet);

    DeleteFirst(&First, &Last);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of elements are : %d\n",iRet);

    DeleteLast(&First, &Last);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of elements are : %d\n",iRet);


    return 0;
    
}