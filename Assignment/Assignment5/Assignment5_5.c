// Problem statement : Accept Total marks and obtain marks  from user and calculate percantage.

#include<stdio.h>

float Percentage(int iObtainMarks , int iTotalMarks)
{
    
    return ((float)iObtainMarks/(float)iTotalMarks)*100;

}


int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0;

    printf("please Enter the Obtain marks  : \n");
    scanf("%d",&iValue1);

    printf("Please Enter the Total marks : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentege is : %f %% \n ",fRet);

    return 0;
}