// Added Insert At Position and Delete At Position

#include<stdio.h>
#include<stdlib.h>

// Structure Declaration
struct node
{
    int data;           // 4 bytes
    struct node *next;  // 8 bytes

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head , int No)
{
    // Step1 : Allocate memory for node

    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    // Step 2 : Initialize the node
    newn->data = No;
    newn->next = NULL;

    // Step 3 : Check whether linked list is empty or not
    if (*Head == NULL)      // LL is empty
    {
        *Head = newn;
    }
    else        // LL contains atleast 1 node in it
    {
        newn -> next = *Head;
        *Head = newn;
    }
    

}

void InsertLast(PPNODE Head , int No)
{
    // Step1 : Allocate memory for node
    PNODE Temp = *Head;

    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    // Step 2 : Initialize the node
    newn->data = No;
    newn->next = NULL;

    // Step 3 : Check whether linked list is empty or not
    if (*Head == NULL)      // LL is empty
    {
        *Head = newn;
    }
    else          // LL contains atleast 1 node in it
    {
        // travel the LL till last node
        while(Temp -> next != NULL)
        {
            Temp = Temp -> next;
        }

        // Add the address of new node at the end of last node
        Temp -> next = newn;

    }
}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;

    if(*Head == NULL)       // Case 1
    {
        return;
    }
    else if((*Head) -> next == NULL)    // Case 2
    {
        free(*Head);
        *Head = NULL;
    }
    else            // Case 3
    {
        *Head = (*Head) -> next;
        free(Temp);
    }

}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;
    if( *Head == NULL)       // Case 1
    {
        return;
    }
    else if((*Head) -> next == NULL)    // Case 2
    {
        free(*Head);
        *Head = NULL;
    }
    else            // Case 3
    {
        while(Temp -> next -> next != NULL)
        {
            Temp = Temp -> next;
        }
        free(Temp -> next);
        Temp -> next = NULL;
    }
}

void Display(PNODE Head)
{
    printf("Elements of Linked List are : \n");

    while(Head != NULL)
    {
        printf("| %d | ->", Head->data);
        Head = Head -> next;

    }
    printf("NULL \n");    

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

void InsertAtPos(PPNODE Head, int No, int iPos)
{
    int Size = Count(*Head);
    PNODE newn = NULL;
    PNODE Temp = *Head;
    int i = 0;

    // Case 1 : Invalid Position    (11 / -2 / 8)
    if((iPos < 1) || (iPos > Size+1))
    {
        printf("Invalid Position \n");
        return;
    }
    // Case 2 : First Position      (1)
    if(iPos == 1)
    {
        InsertFirst(Head , No);
    }
    // Case 3 : Last Position       (7)
    else if(iPos == Size+1)
    {
        InsertLast(Head, No);
    }
    // Case 4 : Position is in between First and Last   (5)
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn -> data = No;
        newn -> next = NULL;
        for(int i = 1 ; i < iPos-1 ; i++ )
        {
            Temp = Temp->next;
        }
         newn -> next = Temp -> next;
         Temp -> next = newn;
    }
}

void DeleteAtPos(PPNODE Head, int iPos)
{
    int Size = Count(*Head);
    PNODE Temp = *Head;
    PNODE TargetedNode = NULL;
    int i = 0;

    // Case 1 : Invalid Position    (11 / -2 / 8)
    if((iPos < 1) || (iPos > Size))
    {
        printf("Invalid Position \n");
        return;
    }
    // Case 2 : First Position      (1)
    if(iPos == 1)
    {
        DeleteFirst(Head );
    }
    // Case 3 : Last Position       (6)
    else if(iPos == Size)
    {
        DeleteLast(Head);
    }
    // Case 4 : Position is in between First and Last   (5)
    else
    {
        for(i = 1; i < iPos-1; i++)
        {
            Temp = Temp->next;
        }
        TargetedNode = Temp -> next;
        Temp -> next = Temp -> next -> next;

        free(TargetedNode); 

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
    
    DeleteAtPos(&First,5);

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