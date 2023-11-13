// Problem statement : Accept N numbers from users and return difference between largest and smallest number 

#include<stdio.h>
#include<stdlib.h>


int Difference(int Arr[],int iLength)
{
    int iCnt = 0, iLarge = 0 ,iSmall = Arr[0];

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] > iLarge)
        {
            iLarge = Arr[iCnt];
        }
        else if(Arr[iCnt] < iSmall)
        {
            iSmall = Arr[iCnt];
        }

    }

    return iLarge-iSmall;

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

    iRet = Difference(ptr,iSize);

    printf("Difference is : %d\n",iRet);

    return 0;
}