// Problem statement : Write a program which accept range from the user and display all Even numbers in between that range.

#include<stdio.h>

void RangeDisplayEven(int iNo1 , int iNo2)
{   
    int iCnt =0;
    
    if (iNo1 > iNo2)
    {
        printf("Invalid range");
    }

    for(iCnt = iNo1;iCnt <= iNo2; iCnt++)
    {   
        if (iCnt % 2 == 0)
            printf("%d\t",iCnt);     
    }
    
} 

int main()
{
    int iValue1 = 0,iValue2 = 0;
    
    printf("Enter Starting point \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point \n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}