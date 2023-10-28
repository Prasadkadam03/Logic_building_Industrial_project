#include<stdio.h>

int Count(int iNo)
{   
    int iDigit = 0 ,iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {   
        iDigit = iNo % 10 ;
        
        if (iDigit < 6)       
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf(" Count of numbers that less than 6 in %d are %d \n",iValue,iRet);

    return 0;
}