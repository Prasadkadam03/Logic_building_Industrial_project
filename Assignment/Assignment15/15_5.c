// Problem statement : Accept N numbers form users and return the product of odd elements.

#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[],int iLength)
{
    int iCnt = 0,iMultiOdd = 1;

    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        if( (Arr[iCnt] % 2 ) != 0)
        {
            iMultiOdd = iMultiOdd * Arr[iCnt];

        }
    }

    return iMultiOdd;
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

    printf(" Enter %d elemenst :\n ",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter the element : %d \n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Product(p , iSize);

    printf("Result is %d ",iRet);

    return 0;

}