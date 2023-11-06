// Problem Statement : Accept character array and count no of occurence of numbers in string.


#include<stdio.h>
#include<stdbool.h>

int CountNo(char str[])
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if( (*str >= '0') && (*str <= '9'))
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet =CountNo(Arr );

    printf("Frequncy  of small letter is : %d\n",iRet);

    return 0;
}

