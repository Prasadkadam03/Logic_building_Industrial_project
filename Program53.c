#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckPallindrome(int iNo)
{
    int iRev = 0,iDigit = 0;
    int iCopy = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev = (iRev * 10) + iDigit;
    }

    return (iRev == iCopy);
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);
    
    if (bRet == TRUE)
    {
        printf("%d is pallindrome\n",iValue);
    }
    else
    {
        printf("%d is not pallindrome\n",iValue);
    }

    return 0;
}