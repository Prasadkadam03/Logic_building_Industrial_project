// Problem Statement :- Take input 2 number from user check the number1 is factor of number2 or not

#include<stdio.h>
#include<stdbool.h>

bool CheckFactor(int iNo1, int iNo2)
{
    if((iNo1 % iNo2) == 0)
        
        return true;

   else
        return false;
    
}

int main()
{

    int iValue1 = 0,iValue2 = 0;
    bool bRet = false;

    printf("Enter first Number:\n");
    scanf("%d",&iValue1);

    printf("Enter second Number :\n");
    scanf("%d",&iValue2);

    bRet = CheckFactor(iValue1,iValue2);

    if(bRet == true)
    {
        printf("%d is a factor of %d\n",iValue1,iValue2);
    }
    else
    {
        printf("%d is not a factor of %d\n",iValue2,iValue1);
    }

    return 0;

}







