// Problem statement : Accept n number of element and return frequency of desire  number among them  

#include<stdio.h>
#include<stdlib.h>  //for malloc and free

int Frequency(int Arr[], int iSize,int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for (iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if(iFrequency == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}


int main()
{
    int iCount = 0,iCnt = 0,iValue = 0;
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

    printf("Enter the element that you want to search : \n");
    scanf("%d",&iValue);
    iRet = Frequency(ptr,iCount,iValue);
    
    printf("%d occurs %d times ",iValue,iRet);

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully...\n");

    return 0;
}