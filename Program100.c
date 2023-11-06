// Problem Statement : Accept Small character for user and return corresponding Capital letter.


#include<stdio.h>
#include<stdbool.h>

char ConvertCapital(char cValue)
{
    
        return cValue - 32;
}
int main()
{
    char ch = '\0', cRet = '\0';
    
    printf("Enter the Small character : \n");
    scanf("%c",&ch);

    cRet = ConvertCapital(ch);
    
    printf("Converted Capital letter is : %c \n ",cRet);

    return 0;
}