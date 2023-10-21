// Problem statement : Accept area in sqyare feet and return in squere meter( 1 square feet = 0.0929 square meter )

#include<stdio.h>

double SquareMetre(int iNo)
{
   double dSqMeter = (0.0929 * iNo);
    return dSqMeter ;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter the area in square feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMetre(iValue);

    printf("Area in square meter is :  %lf \n",dRet);

    return 0;
}