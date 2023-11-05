// Problem statement : Accept N numbers form users and Display elements which are Even and divisible by 5.

#include<stdio.h>
#include<stdlib.h>


void Display(int Arr[],int iLength)
{
    int iCnt = 0;

    printf("Numbers divisible by 5 and Even are : \n");
    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        if( ((Arr[iCnt] % 5 ) == 0) && ( (Arr[iCnt] % 2 ) == 0) ) 
        {
            printf("%d \t",Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements :\n");
    scanf("%d",&iSize);

    p = (int *)malloc( iSize * sizeof(int));


    if(p == NULL)
    {
        printf("Unable to allocate memory \n" );
        return -1;
    }

    printf(" Enter %d elements : \n",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter the element : %d \n",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    Display(p , iSize);

    return 0;
    
}