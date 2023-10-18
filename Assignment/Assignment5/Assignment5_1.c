// Problem statement : Accept name from user amd print thet number

#include<stdio.h>

int main()
{
    char Name[30];

    printf("Enter full name :\n");
    scanf("%[^\n]",&Name);

    printf("Your name is %s\n",Name);

    return 0;

}