// Problem statement : Accept N numbers form users and return difference between summation of even elements And summation of odd elements

#include<stdio.h>
#include<stdlib.h>


int Difference(int Arr[],int iLength)
{
    int iCnt = 0,iSumEven = 0, iSumOdd = 0;

    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        if( (Arr[iCnt] % 2 ) == 0)
        {
            iSumEven += Arr[iCnt];

        }
        else
        {
            iSumOdd += Arr[iCnt];

        }
    }

    return (iSumEven - iSumOdd);
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

    printf(" Enter %d elemenst : ",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter the element : %d \n",iCnt);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p , iSize);

    printf("Result is %d ",iRet);

    return 0;

}