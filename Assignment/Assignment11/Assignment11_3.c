#include<stdio.h>

int CountTwo(int iNo)
{   
    int iDigit = 0 ,iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {   
        iDigit = iNo % 10 ;
        
        if (iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf(" Count of Two in number %d are %d \n",iValue,iRet);

    return 0;
}