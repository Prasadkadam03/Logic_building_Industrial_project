// Problem Statement : Accept number form user and display below pattern
/* Row = 3    col = 3

    *   *   *
    *   *   *
    *   *   *
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{   
    int i = 0, j = 0;
    
    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            printf("*\t");
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