// Problem statement : Write a program which accept one number from user and display its non factors.

#include<stdio.h>

void Nonfactor(int iNo)
{   
    int iCnt =0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    printf("Non-Factors of %d in are :\n",iNo);

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {   
        if(!(iNo % iCnt == 0) )
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

    Nonfactor(iValue);

    return 0;
}