// Problem statement : Accept N numbers and no from users and return 1st occurence.

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt+1;
        }
    
    }

    return -1;
}

int main()
{
    int iSize = 0, iRet = 0,iCnt = 0,iValue = 0 ;
    int *p = NULL;

    printf("Enter the number of elements :\n");
    scanf("%d",&iSize);

    p = (int *)malloc( iSize * sizeof(int));


    if(p == NULL)
    {
        printf("Unable to allocate memory \n" );
        return -1;
    }

    printf(" Enter %d elements : \n ",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter the element : %d \n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the no to check Occurence : ");
    scanf("%d",&iValue);

    iRet = FirstOcc(p , iSize, iValue);

   if( iRet == -1)
    {
        printf("No such number \n");
    }
    else
    {
        printf("First occurence of number is %d\n",iRet);

    }
    return 0;
}

