// Problem statement : Write a program that accept height and width of rectangle from user and calculate area ( Area = width*height )
 

#include<stdio.h>

double RectangleArea(float fWidth , float fHeight)
{
    return fWidth*fHeight;
}

int main()
{
    float fValue1 = 0., fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width : \n");
    scanf("%f",&fValue1);

    printf("Enter height : \n");
    scanf("%f",&fValue2);

    dRet = RectangleArea(fValue1,fValue2);

    printf("Area of Rectangle is : %lf\n",dRet);

    return 0;
}