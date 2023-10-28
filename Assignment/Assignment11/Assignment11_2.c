#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DisplayDigit(int iNo)
{   
    BOOL bIszero = FALSE;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {   
        iDigit = iNo % 10 ;
        
        if (iDigit == 0)
        {
            bIszero = TRUE;
            break ;
        }

        iNo = iNo / 10;
    }

    return bIszero;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = DisplayDigit(iValue);

    if(bRet == TRUE)
    {
        printf(" There is Zero in Number %d \n",iValue);
    }
    else
    {
        printf(" There is no Zero in Number %d \n",iValue);

    }

    return 0;
}