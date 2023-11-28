// Doubly Linked List

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;      // #
};

typedef struct node NODE;
typedef struct node* PNODE ;
typedef struct node** PPNODE ;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = No;    
    newn -> next = NULL;
    newn -> prev = NULL;         // #

    if(*Head == NULL)       // LL is empty
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        (*Head) -> prev = newn;   // #
        *Head = newn ;//
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    
    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = No;    
    newn -> next = NULL;
    newn -> prev = NULL;         // #

    if(*Head == NULL)       // LL is empty
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
        newn -> prev = temp; 
    }
}


void DeleteFirst(PPNODE Head)
{
    if(*Head == NULL)
    {
        return;
    }
    else if(((*Head) -> next == NULL) && ((*Head) -> prev == NULL))
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = (*Head) -> next;
        free((*Head) -> prev);
        (*Head) -> prev = NULL;
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        return;
    }
    else if(((*Head) -> next == NULL) && ((*Head) -> prev == NULL))     // #
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while((temp)->next->next != NULL)
        {
            temp= temp -> next;
        }
        free(temp -> next);
        temp -> next = NULL;

    }
}


void Display(PNODE Head)
{
    printf("\nContents of LinkedList are : \n");

    printf("NULL <=> ");

    while(Head != NULL)
    {
        printf("| %d | <=> ", Head -> data);
        Head = Head -> next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
    }
    return iCnt;
}

void InsertAtPos(PPNODE Head, int No,int iPos)
{
    PNODE temp = *Head;
    PNODE newn = NULL;
    int Size = Count(*Head);
    int i = 0;

    if ((iPos < 1) || (iPos > (Size + 1)))      // 
    {
        printf("Invalid Position \n" );
        return;
    } 

    if ( iPos == 1)
    {
        InsertFirst(Head,No);
    }
    else if (iPos == Size + 1)
    {
        InsertLast(Head,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn -> data = No;
        newn -> next = NULL;
        newn -> prev = NULL;        // #

        for(i = 1; i < iPos - 1;i++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next -> prev = newn;

        temp -> next = newn;
        newn -> prev = temp;

    }
}

void DeleteAtPos(PPNODE Head, int iPos)
{
    PNODE temp = *Head;
    PNODE newn = NULL;
    int i = 0;
    int Size = Count(*Head);

    if ((iPos < 1) || (iPos > Size ))
    {
        printf("Invalid Position \n" );
        return;
    } 

    if ( iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if (iPos == Size)
    {
        DeleteLast(Head);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn -> next = NULL;
        newn -> prev = NULL;        // #

        /*
        for(i = 1; i < iPos ;i++)
        {
            temp = temp -> next;
        }

        temp -> next -> prev = temp -> prev;
        temp -> prev -> next = temp -> next;

        free(temp);
        */

        for(i = 1; i < iPos - 1 ;i++)
        {
            temp = temp -> next;
        }

        temp -> next = temp -> next -> next;
        free(temp -> next -> prev);
        temp -> next -> prev = temp;
    }
    
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);
    iRet = Count(First);
    printf("Number of linked list is : %d\n",iRet);

    InsertLast(&First, 111);
    InsertLast(&First, 121);
    InsertLast(&First, 151);

    Display(First);
    iRet = Count(First);
    printf("Number of linked list is : %d\n",iRet);

    InsertAtPos(&First,105,5);

    Display(First);
    iRet = Count(First);
    printf("Number of linked list is : %d\n",iRet);
    
    DeleteAtPos(&First,2);

    Display(First);
    iRet = Count(First);
    printf("Number of linked list is : %d\n",iRet);

    DeleteFirst(&First);

    Display(First);
    iRet = Count(First);
    printf("Number of linked list is : %d\n",iRet);

    DeleteLast(&First);

    Display(First);
    iRet = Count(First);
    printf("Number of linked list is : %d\n",iRet);


    return 0;
}

/*
Contents of LinkedList are :
NULL <=> | 11 | <=> | 21 | <=> | 51 | <=> NULL
Number of linked list is : 3

Contents of LinkedList are :
NULL <=> | 11 | <=> | 21 | <=> | 51 | <=> | 111 | <=> | 121 | <=> | 151 | <=> NULL
Number of linked list is : 6

Contents of LinkedList are :
NULL <=> | 11 | <=> | 21 | <=> | 51 | <=> | 111 | <=> | 105 | <=> | 121 | <=> | 151 | <=> NULL
Number of linked list is : 7

Contents of LinkedList are :
NULL <=> | 11 | <=> | 21 | <=> | 51 | <=> | 111 | <=> | 121 | <=> | 151 | <=> NULL
Number of linked list is : 6

Contents of LinkedList are :
NULL <=> | 21 | <=> | 51 | <=> | 111 | <=> | 121 | <=> | 151 | <=> NULL
Number of linked list is : 5

Contents of LinkedList are :
NULL <=> | 21 | <=> | 51 | <=> | 111 | <=> | 121 | <=> NULL
Number of linked list is : 4
*/