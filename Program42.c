// Problem Statement :- Take number from user and display the factors

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt=0;
    
    printf("Factors of %d are : \n",iNo);

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
            
            printf("%d\n",iCnt);
    }
    
}

int main()
{

    int iValue = 0;
    
    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;

}

// Time Complexity : O(N/2)