// Problem statement : Accept one number from user and print firts 5 multiple of that number.

#include<stdio.h>

void OddDisplay(int iNo)
{   
    int iCnt = 0 ;

    if( iNo < 0 )
    {
        iNo = -iNo;
    }

    for( iCnt = 1 ; iCnt <= (iNo*5) ; iCnt++ )
        if(iCnt%iNo == 0)
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