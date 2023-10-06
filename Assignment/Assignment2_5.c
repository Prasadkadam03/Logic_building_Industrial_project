#include<stdio.h>
// #include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if ((iNo % 2)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if (bRet== FALSE)
    {
        printf("Number is ODD");
    }
    else
    {
        printf("Number is EVEN");
    }



}