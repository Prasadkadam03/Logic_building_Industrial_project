// Problem statement : Write a program which accept one number from user and display factores in decreasing order.

#include<stdio.h>

void multifactor(int iNo)
{   
    int iCnt =0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    printf("Factors of %d in decreasing order are :\n",iNo);

    for(iCnt = (iNo/2); iCnt >= 1 ; iCnt--)
    {   
        if((iNo % iCnt == 0) )
        {
            printf("%d\n",iCnt);
            
        }       
    }
    
} 

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    multifactor(iValue);

    return 0;
}