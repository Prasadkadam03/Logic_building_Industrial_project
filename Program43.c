// Problem Statement :- Accept no of user and return addition of its factors

#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt=0;
    int iSum = 0;
    
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        { 
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{

    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);

    printf("Sum of factores are : %d \n",iRet);

    return 0;

}

// Time Complexity : O(N/2)