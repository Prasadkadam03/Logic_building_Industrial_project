// Problem statement : Accept distance in Kilometer and return in meter( 1 Kilometer = 1000 meter )

#include<stdio.h>

int KmToMeter(int iNo)
{
    int iMeter = 1000;
    return iNo*iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the distance in Kilometer : \n");
    scanf("%d",&iValue);

    iRet = KmToMeter(iValue);

    printf("Corresponding value of %d KM in meter is %d m",iValue,iRet);

    return 0;
}