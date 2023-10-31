// Problem statement : Accept N numbers and display Even numbers 

#include<stdio.h>
#include<stdlib.h>  //for malloc and free

void EvenDisplay(int Arr[], int iSize)
{   
    int iCnt = 0;
    
    printf("\nElements of the array are : \n");
    //      1           2           3
    for(iCnt = 0 ; iCnt < iSize; iCnt++) // (100,4)
    {   
        if( (Arr[iCnt] % 2) == 0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n");

}

int main()
{
    int iCount = 0, iCnt = 0;
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

    EvenDisplay(ptr, iCount); // Display(100,4)

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully ...\n");
    
    return 0;
    
}