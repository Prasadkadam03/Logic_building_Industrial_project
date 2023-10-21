// Problem statement : Accept temprature in Fahrnhiet and return in celcius ( 1 celcius = (Fahrenheit - 32 ) * (5/9) )

#include<stdio.h>

double FhtoCs(float fNo)
{
    double dCelsius = (((fNo - 32)*(5))/9);
    return dCelsius ;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the temprature in fahrenheit : \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temprature in celcius is :  %lf C",dRet);

    return 0;
}