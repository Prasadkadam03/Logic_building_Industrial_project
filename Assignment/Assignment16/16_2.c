// Problem statement : Accept N numbers from users and return smallest number 

#include<stdio.h>
#include<stdlib.h>


int Minimum(int Arr[],int iLength)
{
    int iCnt = 0, iSmall = Arr[0];
    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] < iSmall)
        {
            iSmall = Arr[iCnt];
        }

    }

    return iSmall;

}
int main()
{
    int iSize = 0,iCnt = 0,iRet = 0;
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

    iRet = Minimum(ptr,iSize);

    printf("Smallest number is : %d\n",iRet);

    return 0;
}