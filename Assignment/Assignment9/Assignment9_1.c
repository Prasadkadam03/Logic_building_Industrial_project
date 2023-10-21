// Problem statement : Write a program that accept radius of circle from use and calcilate area
//                      Consider PI = 3.14 ( Area = PI*Radius*Radius )
 

#include<stdio.h>

double CircleArea(float fNo)
{
    float fPI = 3.14;
    
    return fPI*fNo*fNo;
}

int main()
{
    float fRadius = 0.0;
    double dRet = 0.0;

    printf("Enter Radius : \n");
    scanf("%f",&fRadius);

    dRet = CircleArea(fRadius);

    printf("Area of circle is : %lf\n",dRet);

    return 0;
}