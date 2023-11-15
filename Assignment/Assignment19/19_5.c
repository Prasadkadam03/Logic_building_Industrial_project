// Problem Statement : Accept number form user and display below pattern
/* 
Enter numner of rows and columns :
5
5
1       2       3       4       5
6       7       8       9       10
11      12      13      14      15
16      17      18      19      20
21      22      23      24      25
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{   
    int i = 0, j = 0 , iNo = 1;
    
    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol ; j++ && iNo++)
        {
            printf("%d\t" , iNo);
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