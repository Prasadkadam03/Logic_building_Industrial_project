// Problem statement : Accept amount in US dollar and return its corresponding value in indian currency ( Consider 1$ as 70 Rs)

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iDollar = 70;
    return iNo*iDollar;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Corresponding value of %d in rs is %d Rs",iValue,iRet);

    return 0;
}