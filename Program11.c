// Problem Statement = Accept number from user and determine it is EVEN or ODD

/*
    START
        accept number from user
        Divide thet number by 2
        If reminder is 0 then display even
        otherwise display odd
    STOP
*/


#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////////////////
//
// Entry poin function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet  = false;

    printf("Enter no : \n");
    scanf("%d",&iValue) ;

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("%d is an even number\n",iValue);

    }
    else
    {
        printf("%d is an odd number\n",iValue);

    }

    return 0;
    
}