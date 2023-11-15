// Problem Statement : Accept number form user and display below pattern
/* 
Enter number of rows and columns :
5
5
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{   
    int i = 0, j = 0;
    
    for(i = 1 ; i <= iRow ; i++)
    {
        char cAlpha = 'a';
        int iCnt = 1;
        for(j = iCol ; j >= 1 ; j--)
        {
           if ((i % 2) == 0)
            {
                printf("%d\t" , iCnt);
                iCnt++ ;
            }
            else
            {
                printf("%c\t" ,cAlpha );
                cAlpha++ ;
            }    
        } 
        printf("\n");
    } 
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;      
}