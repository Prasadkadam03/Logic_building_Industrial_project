// Problem statement : Accept N numbers from users and return summation of digit of each number 

#include<stdio.h>
#include<stdlib.h>


void DigitSum(int Arr[],int iLength)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        while(Arr[iCnt] != 0)
        {
            iSum = iSum + (Arr[iCnt] % 10);
            Arr[iCnt] = Arr[iCnt] / 10;
        }

        printf("Sum of digits of %d : \n",iSum);
        iSum = 0;
    }

}

int main()
{
    int iSize = 0,iCnt = 0;
    int *ptr;

    printf("Enter the Number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize*(sizeof(int)));
    printf("Dynamic Memory allocated succesfully \n");

    printf("Enter %d elements :\n",iSize);
    
    for(iCnt = 0; iCnt < iSize ;iCnt++)
    {
        printf("Enter element %d\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);   
    }

    DigitSum(ptr,iSize);
    
    free(ptr);

    return 0;
}