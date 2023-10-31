// Problem statement : Accept n number of element and return largets number among them  

#include<stdio.h>
#include<stdlib.h>  //for malloc and free

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];

    for (iCnt = 0; iCnt < iSize ; iCnt++)\
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}


int main()
{
    int iCount = 0,iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

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

    iRet = Maximum(ptr,iCount);
    printf("Maximum Element is : %d\n",iRet);

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully...\n");

    return 0;
}