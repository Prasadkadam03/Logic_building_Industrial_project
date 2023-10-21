// Problem statement : Write a program which accept range from the user and display addition of all Even numbers in between that range.(Range should n=be positive only)

#include<stdio.h>

int RangeSumEven(int iNo1 , int iNo2)
{   
    int iCnt =0, iAdd = 0;
    
    if (iNo1 > iNo2 || iNo1 < 0 || iNo2 < 0)
    {
        printf("Invalid range\n");

        return 0;
    }
    else{
        for(iCnt = iNo1;iCnt <= iNo2; iCnt++)
        {       
            if(iCnt % 2 == 0)
                iAdd = iAdd + iCnt;    
        }
        return iAdd;
    }
    
} 

int main()
{
    int iValue1 = 0,iValue2 = 0, iRet = 0;
    
    printf("Enter Starting point \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point \n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    printf("Addition is %d \n",iRet);

    return 0;
}