// Problem statement : Write a program which accept one number from user and print even factores of that number.

#include<stdio.h>

void Displayfactor(int iNo)
{   
    int iCnt =0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    printf("Even Factors od %d are :\n",iNo);

    for(iCnt = 1;iCnt <= (iNo/2); iCnt++)
    {   
        if((iNo % iCnt == 0) && (iCnt % 2 == 0) )
        {
            printf("%d\n",iCnt);
        }       
    }

    /*
    // One more logic to solve this
    for(iCnt = 2; iCnt <= (iNo/2); iCnt += 2)
    {
        if( iNo % iCnt == 0 )
        {
            printf("%d\n",iCnt);
        }   
    }
    */
} 

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    Displayfactor(iValue);

    return 0;
}