// Problem statement : Accept number from user amd print that number of $ & *

#include<stdio.h>

void Pattern(int iNo)
{   
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++ )
        printf("$ \t * \t");
}

int main()
{
    int iValue;

    printf("Please enter the number :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

}