// Problem statement : Accept N numbers form users and check whether it contains 11 or not.

#include<stdio.h>
#include<stdlib.h>


#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Frequncy(int Arr[],int iLength)
{
    int iCnt = 0,iCntEven = 0, iCntOdd = 0;

    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == 11 )
        {
            return TRUE;

        }
    }

    return FALSE;
}

int main()
{
    int iSize = 0,iCnt = 0;
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

    bRet = Frequncy(p , iSize);
    
    if( bRet == TRUE)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");

    }
    return 0;
}