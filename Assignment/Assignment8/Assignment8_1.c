// Problem statement : Accept value from user and print below format
// Input : 5       output : *   *   *   *   *   #   #   #   #   #


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
        iNo = -iNo;

    for(iCnt = 1; iCnt <= (iNo*2) ; iCnt++)
    {
        if(iCnt <= iNo)
            printf("*\t");
        else
            printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}