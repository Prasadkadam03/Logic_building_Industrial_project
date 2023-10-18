// Problem statement : Accept two numbers from user and check whether numbers are equal or not.

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL ChkEqual(int iNo1 , int iNo2)
{
    if (iNo1 == iNo2)
        return TRUE;
    else
        return FALSE;
}


int main()
{
    int iValue1 = 0,iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter the first number : ");
    scanf("%d",&iValue1);

    printf("Enter the second number : ");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == TRUE)
        printf("%d and %d are EQUAL",iValue1,iValue2);
    else
        printf("%d and %d are not EQUAL",iValue1,iValue2);
}