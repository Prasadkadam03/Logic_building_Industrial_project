// Problem statement : Accept N numbers from users and return 3 digit number 

#include<stdio.h>
#include<stdlib.h>


void Digit(int Arr[],int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if( ( Arr[iCnt] > 99 ) && (Arr[iCnt] < 1000 ) )
        {
            printf("%d\t",Arr[iCnt]);
        }
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

    Digit(ptr,iSize);
    
    return 0;
}