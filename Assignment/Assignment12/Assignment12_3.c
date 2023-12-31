#include<stdio.h>

int CountRange(int iNo)
{   
    int iDigit = 0 ,iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {   
        iDigit = iNo % 10 ;
        
        if ((iDigit > 3) && (iDigit < 7) )       
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

    iRet = CountRange(iValue);

    printf(" Count of numbers between 3 to 7 in %d are %d \n",iValue,iRet);

    return 0;
}