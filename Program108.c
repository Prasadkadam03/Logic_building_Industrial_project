// Problem Statement : Accept character array and count no of occurence of character accept from user.


#include<stdio.h>
#include<stdbool.h>

int Count(char str[], char ch)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if(*str == ch)
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
    char cValue = '\0';

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character to calculate frequency : \n");
    scanf(" %c",&cValue);

    iRet =Count(Arr ,cValue);

    printf("length of string is : %d\n",iRet);

    return 0;
}




