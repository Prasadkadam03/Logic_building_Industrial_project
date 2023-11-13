// Problem statement : Accept N numbers from users and return largest number 

#include<stdio.h>
#include<stdlib.h>


int Maximum(int Arr[],int iLength)
{
    int iCnt = 0, iLarge = 0;
    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] > iLarge)
        {
            iLarge = Arr[iCnt];
        }

    }

    return iLarge;

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

    iRet = Maximum(ptr,iSize);

    printf("Largest number is : %d\n",iRet);

    return 0;
}