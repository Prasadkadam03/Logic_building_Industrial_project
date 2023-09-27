// Problem statement :- Accept 2 values from user and perform the addition.

// Step 1 : Understand the problem statement
// Conclusion : We have to accept 2 integers and perform its addition.
 
 // Step 2 : Write the algorithm
/*
    START
        Accept first number from user and store it into no1
        Accept second number from user and store it into no2
        Create one variable to store the result name as Ans
        Perform Addition of no1 and no2, srore the result in Ans
        Display the result from Ans to the user
    STOP
*/

// Step 3 : Decide the programmin language (C/C++/Java/Python)
// We select C programming

// Step 4 : Write the program 

//

#include<stdio.h>

// Addition is a function whicth accept 2 parameters as integers and it return inger

int Addition(int iNo1, int iNo2)
{
    int iSum = 0;

    iSum = iNo1 + iNo2;
    return iSum;
}

int main()
{
    auto int iValue1 = 0,iValue2 = 0,iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iAns = Addition(iValue1 ,iValue2);

    printf("Addition is = %d\n" ,iAns);

    return 0;
    
}

// Step 5 : Test the code
/*
Test case 1:
Input : 10 11
OUTPUT : 21

Test case 2:
Input : 10 0
OUTPUT : 0

Test case 3:
Input : 12 -6
OUTPUT : 6

Test case 4:
Input : -6 -5
OUTPUT : -11
*/