// Problem statement : Accept three numbers from user and print its multiplication.

#include<stdio.h>

int Multiply(int iNo1 , int iNo2 , int iNo3)
{
    return iNo1*iNo2*iNo3;
}


int main()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0,iRet = 0;

    printf("Enter the first number : \n");
    scanf("%d",&iValue1);

    printf("Enter the second number : \n");
    scanf("%d",&iValue2);

    printf("Enter the first number : \n");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is : %d\n ",iRet);

    return 0;
}