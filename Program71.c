// Problem statement : Print star pattern - 10 * linear

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf(iNo*printf("*\t"));
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter the number of * to display :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}