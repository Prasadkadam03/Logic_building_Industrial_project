// Problem Statement : Accept number form user and display below pattern
/* 
Enter numner of rows and columns :
5
4
A       A       A       A
B       B       B       B
C       C       C       C
D       D       D       D
E       E       E       E
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{   
    int i = 0, j = 0;
    char cAlpha = 'A';
    
    for(i = 1 ; i <= iRow ; i++ && cAlpha++)
    {
        for(j = iCol ; j >= 1 ; j--)
        {
            printf("%c\t" ,cAlpha);
        } 
        printf("\n");
    } 
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter numner of rows and columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;      
}