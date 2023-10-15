// Problem statement : Write a program which accept one number from user and display summation of  non factors.

#include<stdio.h>

int SumNonfactor(int iNo)
{   
    int iCnt =0,iSum = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    printf("Non-Factors of %d in are :\n",iNo);

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {   
        if(!(iNo % iCnt == 0) )
        {
            printf("%d\t",iCnt);
            iSum = iSum + iCnt;
        }       
    }
    
    return iSum; 
} 

int main()
{
    int iValue = 0 , iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = SumNonfactor(iValue);

    printf("\nSummation of non-factors is : \n");
    printf("%d",iRet);

    return 0;
}