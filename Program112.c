// Problem Statement : Accept character array and count no of occurence of numbers in Vowels( a,e,i,o,u).


#include<stdio.h>
#include<stdbool.h>

int CountVowels(char str[])
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if( (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
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

    iRet =CountVowels(Arr );

    printf("Frequncy  of vowels is : %d\n",iRet);

    return 0;
}

