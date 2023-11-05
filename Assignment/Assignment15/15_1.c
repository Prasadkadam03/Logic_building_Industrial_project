// Problem statement : Accept N numbers and no  from users and check whether no is present or not.

#include<stdio.h>
#include<stdlib.h>


#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Frequncy(int Arr[],int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] == iNo )
        {
            return TRUE;
        }
    }

    return FALSE;
}

int main()
{
    int iSize = 0,iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter the number of elements :\n");
    scanf("%d",&iSize);

    p = (int *)malloc( iSize * sizeof(int));


    if(p == NULL)
    {
        printf("Unable to allocate memory \n" );
        return -1;
    }

    printf(" Enter %d elemenst : \n ",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter the element : %d \n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the no: ");
    scanf("%d",&iValue);

    bRet = Frequncy(p , iSize, iValue);
    
    if( bRet == TRUE)
    {
        printf("%d is present\n",iValue);
    }
    else
    {
        printf("%d is absent\n",iValue);

    }
    return 0;
}