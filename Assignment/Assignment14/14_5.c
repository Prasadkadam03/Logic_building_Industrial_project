// Problem statement : Accept N numbers and no from users and return its frequency.

#include<stdio.h>
#include<stdlib.h>


int Frequncy(int Arr[],int iLength, int iNo)
{
    int iCnt = 0,iCntNo = 0;

    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCntNo++;
        }
    
    }

    return iCntNo;
}

int main()
{
    int iSize = 0, iRet = 0,iCnt = 0,iValue = 0 ;
    int *p = NULL;

    printf("Enter the number of elements :\n");
    scanf("%d",&iSize);

    p = (int *)malloc( iSize * sizeof(int));


    if(p == NULL)
    {
        printf("Unable to allocate memory \n" );
        return -1;
    }

    printf(" Enter %d elements : \n ",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter the element : %d \n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the no to check frequency : ");
    scanf("%d",&iValue);

    iRet = Frequncy(p , iSize, iValue);

    printf("Result is %d ",iRet);

    return 0;

}