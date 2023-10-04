// Problem Statement : Accept a number from user and calculate CUBE of that number

#include<stdio.h>

long int CalculateCube(int iValue)
{
    long int iCube = 0;

    iCube = iValue * iValue * iValue ;

    return iCube;

}

////////////////////////////////////////////////////////////////////////////////
//
// Entry poin function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iNo = 0;
    long int iAns = 0;
    printf("Enter the number to calculate cube : \n");
    scanf("%d",&iNo);

    iAns = CalculateCube(iNo);

    printf("Cube is : %ld\n",iAns);
    return 0;

}