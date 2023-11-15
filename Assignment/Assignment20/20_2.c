// Problem Statement : Accept number form user and display below pattern
/* 
Enter number of rows and columns :
5
5
2       4       6       8       10
1       3       5       7       9
2       4       6       8       10
1       3       5       7       9
2       4       6       8       10

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{   
    int i = 0, j = 0;
    for(i = 1 ; i <= iRow ; i++)
    {        
        int iCntOdd = 1,iCntEven = 2;    
        for(j = 1 ; j <= iCol ; j++)
        {
            if ((i % 2) == 0)
            {
                printf("%d\t" , iCntOdd);
                iCntOdd+=2 ;
            }
            else
            {
                printf("%d\t" , iCntEven);
                iCntEven+=2 ;
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