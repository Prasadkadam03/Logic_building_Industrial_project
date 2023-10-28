#include<stdio.h>

int CountDiff(int iNo)
{   
    int iDigit = 0 ,iEvenSum = 0,iOddSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {   
        iDigit = iNo % 10 ;
        
        if (iDigit % 2 == 0)       
        {
            iEvenSum += iDigit;
        }
        else
        {
            iOddSum += iDigit;
        }

        iNo = iNo / 10;
    }

    return iEvenSum-iOddSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Sum of ODD and EVEN digits in %d are %d \n",iValue,iRet);

    return 0;
}