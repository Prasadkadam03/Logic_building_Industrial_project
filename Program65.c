// Problem statement : Accept n number of element and return largets number among them  

#include<stdio.h>
#include<stdlib.h>  //for malloc and free

float Average(int Arr[],int iSize)
{
    int iCnt = 0,iSum = 0;

    for ( iCnt = 0; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return ((float)iSum/(float)iSize);
}

int main()
{
    int iCount = 0,iCnt = 0;
    int *ptr = NULL;
    float fRet = 0.0f;

    printf("Enter number of elements : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
    printf(" Dynamic memory gets allocated succesfully....\n");

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iCount ; iCnt++)
    {
        printf("\n Enter the element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    fRet = Average(ptr,iCount);
    printf("Average is : %f\n",fRet);

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully...\n");

    return 0;
}