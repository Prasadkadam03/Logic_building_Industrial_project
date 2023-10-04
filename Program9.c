// Problem statement : Accept radius from user and calculate the area of circle

// Step 1 : Understand the problem statement
// Conclusion : We are going to use the formuls as PI*R*R

// Step 2 : Algorithm
/*
    START
        Accept radius from user and store into RADIOUS
        Create variable as PI and store value 3.14
        Calculate area PI * RADIOUS * RADIOUS
        Displya the value of Area to the user
    STOP
*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Functin Name :  Calculate Area
// Descreption :    it is used to calculate area of circle
// Input argument : Float
// output :         Float
// author :         Prasad Kailas kadam
// Date :           02/10/2023
//
////////////////////////////////////////////////////////////////////////////////

#define PI 3.14
float CalculateArea(float fValue)
{
    float fAns = 0.0f;
    

    fAns = PI * fValue * fValue;
    return fAns;
}

////////////////////////////////////////////////////////////////////////////////
//
// Entry poin function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fRADIUS = 0.0f;
    float fArea = 0.0f;


    printf("Enter the radius of circle : \n");
    scanf("%f",&fRADIUS);

    fArea = CalculateArea(fRADIUS);

    printf("Area of circle is = %f\n" ,fArea);
}