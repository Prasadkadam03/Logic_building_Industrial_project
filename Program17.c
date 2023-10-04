// Problem statement : Accept percentage from user and diplay 
                        // fail(0-34),pass(35-49),second class(50-59),first class(60-74),first class with distinction(75-100)

#include<stdio.h>

void DisplayClass(float fMarks)
{
    if((fMarks >= 0.0) && (fMarks < 35.00))
    {
        printf("You are Fail\n");
    }
    else if((fMarks >= 35.00) && (fMarks < 50.00))
    {
        printf("Your class is Pass class \n");
    }
    else if((fMarks >= 50.00) && (fMarks < 60.00))
    {
        printf("Your class is Second Class");   
    }
    else if((fMarks >= 60.00) && (fMarks < 75.00))
    {
        printf("Your class is First Class");
    }
    else if((fMarks >= 75.00) && (fMarks <= 100.00))
    {
        printf("Your class is First Class with Distinction");
    }
    else                        
    {
        printf("Invalid input");
    }
}

////////////////////////////////////////////////////////////////////////////////
//
// Entry point function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f;

    printf("Enter your percentage : \n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}

