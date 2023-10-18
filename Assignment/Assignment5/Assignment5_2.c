// Problem statement : Accept one number from user and check whether that number is greater than 100 or not.

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL ChkGreater(int iNo)
{
    if (iNo > 100)
        return TRUE;
    else
        return FALSE;
}


int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
        printf("%d is greater then 100",iValue);
    else
        printf("%d is smaller than 100",iValue);

    return 0;
}