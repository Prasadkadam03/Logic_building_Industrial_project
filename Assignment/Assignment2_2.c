#include<stdio.h>

void Display(int iNo)
{
    int i = 0;
    while( iNo > i )
    {
        printf("*\n");
        iNo--;
        
    }
    

}

int main()
{
    int iValue = 0;
    
    printf("Enter number: \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;

}
