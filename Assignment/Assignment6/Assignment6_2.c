// Problem statement : Accept one number from user and printnumbers till that numbers.

#include<stdio.h>

void Display(int iNo)
{   
    int iCnt = 0 ;

    for( iCnt = 1 ; iCnt <= iNo ; iCnt++ )
        printf("%d\t",iCnt);
}


int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}