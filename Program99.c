// Problem statement : Print star pattern - 10 * linear

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int iCnt = 0;
    for (iCnt = 1 ; iCnt <= (iRow*iCol) ; iCnt++)
    {   
        if (iCnt % iRow != 0)
        {
            printf("*\t");
        }
        else
        {
            printf("*\t\n");
        }
    }
    printf("\n");
}
int main()
{
    int iNo1= 0,iNo2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iNo1);

    printf("Enter number of columns : \n");
    scanf("%d",&iNo2);

    Display(iNo1,iNo2);

    return 0;
}