// Problem Statement : Accept character array and replace the small to Capital.

#include<stdio.h>
#include<stdbool.h>

void struprX(char str[])
{


    while (*str != '\0')
    {
        if( (*str >= 'a') && (*str <= 'z') )
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);

    printf("modified string is : %s\n",Arr);

    return 0;
}

