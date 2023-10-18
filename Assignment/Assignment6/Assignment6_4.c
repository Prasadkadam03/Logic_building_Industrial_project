// Problem statement : Accept one number from user and print all odd numbers till number.

#include<stdio.h>

void OddDisplay(int iNo)
{   
    int iCnt = 0 ;

    for( iCnt = 1 ; iCnt <= iNo ; iCnt+=2 )
        printf("%d\t",iCnt);
}


int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;

}