// Problem statement : Accept N numbers form users and return Frequncy of even numbers

#include<stdio.h>
#include<stdlib.h>


int Frequncy(int Arr[],int iLength)
{
    int iCnt = 0,iCntEven = 0, iCntOdd = 0;

    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        if( (Arr[iCnt] % 2 ) == 0)
        {
            iCntEven++;

        }
        else
        {
            iCntOdd++;
        }
    }

    return (iCntEven - iCntOdd);
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

    printf(" Enter %d elemenst : \n ",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter the element : %d \n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequncy(p , iSize);

    printf("Result is %d ",iRet);

    return 0;

}