// Problem Statement : Accept Capital character for user and return corresponding small letter.


#include<stdio.h>
#include<stdbool.h>

char ConvertSmall(char cValue)
{
    
        return cValue + 32;
}
int main()
{
    char ch = '\0', cRet = '\0';
    
    printf("Enter the Capital character : \n");
    scanf("%c",&ch);

    cRet = ConvertSmall(ch);
    
    printf("Converted small letter is : %c \n ",cRet);

    return 0;
}