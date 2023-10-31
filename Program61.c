// Problem statement : Accept N numbers and display Addition of numbers numbers 

#include<stdio.h>
#include<stdlib.h>  //for malloc and free

int Addition(int Arr[], int iSize)
{   
    int iCnt = 0, iSum = 0;

    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    { 
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iCount = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements that you want to enter :\n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic memory gets allocated succesfully for % d elements \n",iCount);
    printf("Enter the values : \n");
    //      1       2               3
    for (iCnt = 0;iCnt < iCount; iCnt++) // o(N)
    {
        printf("\nEnter the element no %d : ",iCnt+1);  // 4
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Addition(ptr, iCount); // Display(100,4)

    printf("Addition of all elements is : %d\n",iRet);

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully ...\n");
    
    return 0;

}