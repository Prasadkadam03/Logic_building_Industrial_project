// Problem statement : Write a program which accept one number from user and print that number of even numners on screen

#include<stdio.h>

void PrintEven(int iNo)
{   
    int iCnt =0;
    
    if(iNo <= 0)
    {
        return;
    }

    printf("Even numbers are :\n");

    for(iCnt = 0;iCnt <= iNo; iCnt++)
    {   
        if(iCnt % 2 == 0)
        {
            printf("%d\n",iCnt);
        }       
    }

    /*
    // One more logic to solve this
    for(iCnt = 0;iCnt <= iNo; iCnt+=2)
    {
        printf("%d\n",iCnt);   
    }
    */
} 

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}