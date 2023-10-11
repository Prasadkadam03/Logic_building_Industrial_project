// Problem Statement :- Accept no of user and check its Perfect number or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
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
    if (iSum == iNo)
    {
       return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool iRet = false;
    
    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet = CheckPerfect(iValue);
    if (iRet==true)
    {
            printf("%d is perfect number\n",iValue);
    }
    else
    {
        printf("%d is not perfect number\n",iValue);        
    }
    return 0;
}

// Time Complexity : O(N/2)