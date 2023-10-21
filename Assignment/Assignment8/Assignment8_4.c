// Problem statement : Write a program to find a odd factorial of given number

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    
    if(iNo < 0)
        iNo = -iNo;

    for(iCnt = 1; iCnt <= iNo; iCnt+=2)
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

    iRet = OddFactorial(iValue);

    printf("Odd factorial of %d : %d\n",iValue,iRet);

    return 0;
}