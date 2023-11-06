// Problem Statement : Accept character array and count no of occurence of Capital characters .


#include<stdio.h>
#include<stdbool.h>

int CountCapital(char str[])
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if( (*str >= 'A') && (*str <= 'Z'))
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

    iRet =CountCapital(Arr );

    printf("Frequncy  of small letter is : %d\n",iRet);

    return 0;
}

