// Problem statement : Write a program which accept one number from user and display of multiplication factores of the factors.

#include<stdio.h>

int multifactor(int iNo)
{   
    int iCnt =0,iMulti = 1;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    printf("Factors of %d are :\n",iNo);

    for(iCnt = 1;iCnt <= (iNo/2); iCnt++)
    {   
        if((iNo % iCnt == 0) )
        {
            printf("%d\n",iCnt);
            iMulti = iMulti * iCnt;
        }       
    }
    return iMulti;
} 

int main()
{
    int iValue = 0,iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = multifactor(iValue);

    printf("Multiplication of factors is : \n");
    printf("%d",iRet);

    return 0;
}