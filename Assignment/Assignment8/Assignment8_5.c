// Problem statement : Write a program to find a odd factorial of given number

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFactOdd = 1,iFactEven = 1;;
    
    if(iNo < 0)
        iNo = -iNo;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ( iCnt % 2 == 0)
            iFactEven = iFactEven*iCnt;
        else
            iFactOdd = iFactOdd * iCnt;
    }

    return iFactEven-iFactOdd;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Diffrence of and and odd  factorial of %d : %d\n",iValue,iRet);

    return 0;
}