// Problem statement : Write a program to find factorial of given number.

#include<stdio.h>

void Table(int iNo)
{   
    int iCnt =0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= 10; iCnt++)
    {   
        printf("%d\t",iCnt*iNo);
    }
    
} 

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}