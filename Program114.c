// Problem Statement : Accept character array and count no of occurence of space.

#include<stdio.h>
#include<stdbool.h>

int CountSpace(char str[])
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if( (*str == ' '))
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

    iRet =CountSpace(Arr );

    printf("Frequncy  of space is : %d\n",iRet);

    return 0;
}

