// Doubly circular linked list


#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;

}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail,int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;

    }
    else
    {
        newn -> next = *Head;
        (*Head) -> prev = newn;
        (*Head) = newn;
    }

    (*Tail) -> next = *Head;
    (*Head) -> prev = *Tail;

}
void InsertLast(PPNODE Head, PPNODE Tail,int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;

    }
    else
    {
        newn -> prev = *Tail;
        (*Tail) -> next = newn;
        (*Tail) = newn;
    }

    (*Tail) -> next = *Head;
    (*Head) -> prev = *Tail;
}
void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Head = (*Head) -> next;
        free((*Tail) -> next);        // free(*head -> prev);
        (*Head) -> prev = *Tail;
        (*Tail) -> next = *Head;
    }
}
void DeleteLast(PPNODE Head , PPNODE Tail)
{
    
    if((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Tail);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Tail = (*Tail) -> prev;
        free((*Head) -> prev);        // free(*Tail -> next);
        (*Head) -> prev = *Tail;
        (*Tail) -> next = *Head;

    }
}

void Display(PNODE Head, PNODE Tail )
{

    if(Head != NULL && Tail != NULL)
    {
        do
        {
            printf("| %d | <-> ",Head->data);
            Head = Head-> next;

        }while(Head!= Tail->next);
    }

}
int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;

    if(Head != NULL && Tail != NULL)
    {
        do
        {
            iCnt +=1;
            Head = Head-> next;

        }while(Head!= Tail->next);
    }

    return iCnt;
}

void InsertAtPos(PPNODE Head, PPNODE Tail,int iNo, int iPos)
{
    int Size = Count(*Head , *Tail);
    PNODE temp = *Head;
    PNODE newn = NULL;
    int i = 0;

    if((iPos < 1) || (iPos > Size + 1))
    {
        printf("Invalid position \n");
    }

    if(iPos == 1)
    {
        InsertFirst(Head, Tail, iNo);
    }
    else if (iPos == Size+1 )
    {
        InsertLast(Head ,Tail ,iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn -> data = iNo;
        newn -> next = NULL;
        newn -> prev = NULL;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }
        
        /*
        temp -> next -> prev = newn;
        newn -> next = temp -> next; 
        temp -> next = newn;
        newn -> prev = temp;
        */
        newn -> next = temp -> next;
        temp -> next -> prev = newn;
        temp -> next = newn;
        newn -> prev = temp;
    }
}

void DeleteAtPos(PPNODE Head,PPNODE Tail, int iPos)
{
    int Size = Count(*Head , *Tail);
    PNODE temp = *Head;
    
    int i = 0;

    if((iPos < 1) || (iPos > Size))
    {
        printf("Invalid position \n");
    }

    if(iPos == 1)
    {
        DeleteFirst(Head, Tail );
    }
    else if (iPos == Size )
    {
        DeleteLast(Head ,Tail );
    }
    else
    {
        /*
        for(i = 1; i < iPos ; i++)
        {
            temp = temp -> next;
        }

        temp -> next -> prev = temp -> prev;
        temp -> prev -> next = temp -> next;
        free(temp);
        */

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        temp -> next = temp -> next -> next;
        free(temp -> next);
        temp -> next -> prev = temp;
    }
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    int iRet = 0;

    InsertFirst(&First , &Last , 51);
    InsertFirst(&First , &Last , 21);
    InsertFirst(&First , &Last , 11);

    InsertLast(&First , &Last , 111);
    InsertLast(&First , &Last , 121);
    InsertLast(&First , &Last , 131);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&First , &Last);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of nodes are : %d\n",iRet);

    DeleteLast(&First , &Last);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of nodes are : %d\n",iRet);

    InsertAtPos(&First , &Last , 55 , 2);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of nodes are : %d\n",iRet);

    DeleteAtPos(&First , &Last , 2);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}