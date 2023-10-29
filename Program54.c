#include <stdio.h>  // for printf and scanf
#include <stdlib.h> // for malloc and free

int main() 
{
    int iCount = 0,iCnt = 0;
    int *ptr = NULL;
    
    printf("Enter the numbre of elements : \n");
    scanf("%d",&iCount);

    ptr = ( int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for (iCnt = 0;iCnt < iCount ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Your entered elements are : \n");
    for (iCnt = 0;iCnt < iCount ; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }

    return 0;
}
