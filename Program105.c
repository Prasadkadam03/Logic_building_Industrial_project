// Problem Statement : Accept character array and display it.


#include<stdio.h>
#include<stdbool.h>

void Display(char str[])
{
    printf("String is : %s\n",str);
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}




