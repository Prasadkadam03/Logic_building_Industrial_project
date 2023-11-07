// Problem Statement : Accept character array and replace the small with Capital.

#include<stdio.h>
#include<stdbool.h>

void strlwrX(char str[])
{
    while (*str != '\0')
    {
        if( (*str >= 'A') && (*str <= 'Z') )
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("modified string is : %s\n",Arr);

    return 0;
}

