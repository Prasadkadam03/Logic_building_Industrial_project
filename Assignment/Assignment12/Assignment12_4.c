#include<stdio.h>

int MultiDigits(int iNo)
{   
    int iDigit = 0 ,iMulti = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {   
        iDigit = iNo % 10 ;
        if (iDigit != 0)
            iMulti = iMulti * iDigit;

        iNo = iNo / 10;
    }

    return iMulti;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf(" Multiplication of digits in %d are %d \n",iValue,iRet);

    return 0;
}