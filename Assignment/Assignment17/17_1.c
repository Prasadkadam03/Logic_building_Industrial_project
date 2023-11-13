// Problem Statement : Accept number form user and display below pattern
// 5    : A    B   C   D   E

#include<stdio.h>

void Pattern(int iNo)
{   
    int iCnt = 0;
    char cAlpha = 'A';

    for(iCnt = 1 ;iCnt <= iNo ; (iCnt++ && cAlpha++))
    {
        printf("%c\t",cAlpha);
    }
}


int main()
{
    int iValue = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}