

#include<stdio.h>

int Average(int iNo1, int iNo2 ,int iNo3)
{
    float Average = 0.0f;
    Average = ((float)(iNo1 + iNo2 + iNo3))/3;
    return Average;
}

////////////////////////////////////////////////////////////////////////////////
//
// Entry point function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    float fRet = 0.0f;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second number : \n");
    scanf("%d",&iValue2);

    printf("Enter Third number : \n");
    scanf("%d",&iValue3);

    fRet = Average(iValue1, iValue2, iValue3);

    printf("Average of numbers is : %f \n",fRet);
}