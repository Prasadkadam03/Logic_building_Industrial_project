// Problem Statement : Accept number form user and display below pattern
/* 
Enter numner of rows and columns :
4
4
A       B       C       D
a       b       c       d
A       B       C       D
a       b       c       d

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{   
    int i = 0, j = 0;
    char cCapital = 'A',cSmall = 'a';
    
    for(i = 1 ; i <= iRow ; i++)
    {
        cCapital = 'A',cSmall = 'a';
        
        for(j = 1 ; j <= iCol ; j++)
        {
            if ((i % 2) == 0)
            {
                printf("%c\t" , cSmall);
                cSmall++;
            }
            else
            {
                printf("%c\t" , cCapital);
                cCapital++;
            }    

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