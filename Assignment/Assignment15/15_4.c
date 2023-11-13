// Problem statement : Accept N numbers and range form users and Display elements in the range .

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength, int iStart ,int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        if( (Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd) )
        {
            printf("%d \t",Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0,iCnt = 0;
    int *p = NULL;
    int iValue1 = 0 ,iValue2 = 0;

    printf("Enter the number of elements :\n");
    scanf("%d",&iSize);

    p = (int *)malloc( iSize * sizeof(int));


    if(p == NULL)
    {
        printf("Unable to allocate memory \n" );
        return -1;
    }

    printf(" Enter %d elements : \n",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter the element : %d \n",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the Starting element : \n");
    scanf("%d",&iValue1);

    printf("Enter the End element : \n");
    scanf("%d",&iValue2);

    Display(p , iSize, iValue1, iValue2);

    return 0;
    
}