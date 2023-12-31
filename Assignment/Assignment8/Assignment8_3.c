// Problem statement : Write a program to find a even factorial of given number

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    
    if(iNo < 0)
        iNo = -iNo;

    for(iCnt = 2; iCnt <= iNo; iCnt+=2)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorian of %d : %d\n",iValue,iRet);

    return 0;
}