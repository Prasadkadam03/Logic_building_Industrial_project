// Problem statement : Write a program which accept one character from user and convert case of that character


// #include<ctype.h>   // for islower, isupper, tolower, toupper functions


// using ASCII values 

void DisplayConvert(char cChar)
{   
    
    if ( (cChar >= 'A') && (cChar <= 'Z'))
    {
        printf("Lowercase character of '%c' is '%c' \n", cChar, cChar+32);     // increment 32 to get Lowercase
    }
    else if((cChar >= 'a') && (cChar <= 'z'))
    {
        printf("Uppercase character of '%c' is '%c' \n", cChar, cChar-32);    // increment 32 to get Upperrcase
    }
    else
    {
        printf(" '%c' is not a character value \n", cChar);          
    }
}

// one more logic using <ctype> librarie


/* 

void DisplayConvert(char cChar)
{   
    int  t = 89;
    printf("%c\n", (char) t);
    char m ;
    printf("%d\n",(int)m);
    if ( islower(cChar))
    {
        printf("Uppercase character of '%c' is '%c' \n",cChar,toupper(cChar));
    }
    else if( isupper(cChar))
    {
        printf("lowercase characterof '%c' is '%c' \n",cChar,tolower(cChar));
    }
    else
    {
        printf(" '%c' is not a character value \n",cChar);          
    }
} 

*/
int main()
{
    char cValue = '\0';
    
    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}

#include<stdio.h>