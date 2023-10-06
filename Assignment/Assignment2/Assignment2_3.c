#include<stdio.h>

void Accept(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: \n");
    scanf("%d",&iValue);

    Accept(iValue);
    return 0;

}



