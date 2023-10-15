// Problem statement : Write a program which accept one number from user and display diffrence between summation of all its factors and non factors.

#include<stdio.h>

int factorDiff(int iNo)
{   
    int iCnt =0,iSumFactors = 0 , iSumNonFactors = 0, iDiff = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {   
        if((iNo % iCnt == 0) )
        {
            iSumFactors = iSumFactors + iCnt;
        }
        else
        {
            iSumNonFactors = iSumNonFactors + iCnt;
        }       
    }
    
    return iSumFactors - iSumNonFactors; 
} 

int main()
{
    int iValue = 0 , iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = factorDiff(iValue);

    printf("\nDifference between Summation of factors and non-factors is : \n");
    printf("%d",iRet);

    return 0;
}