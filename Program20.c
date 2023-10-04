// Problem statement : exam time 1st std = 8 AM ,2nd std = 9 AM,3rd std = 10 AM,4th std = 11 AM, 5th std = 12 NOON.



#include<stdio.h>

void DisplayExamTime(int iStandard)
{   
    if(iStandard > 5 || iStandard < 1)      // Filter
    {
        printf(" Invalid Input..\n");
    }
    if(iStandard == 1)
    {
        printf("Your exam is at 8 AM\n");
    }
    else if(iStandard == 2)
    {
        printf("Your exam is at 9 AM\n");
    }
    else if(iStandard == 3)
    {
        printf("Your exam is at 10 AM\n");
    }
    else if(iStandard == 4)
    {
        printf("Your exam is at 11 AM\n");
    }
    else if(iStandard == 5)
    {
        printf("Your exam is at 12 NOOn\n");
    }

}

////////////////////////////////////////////////////////////////////////////////
//
// Entry point function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf( " Enter your standard : \n");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);
    return 0;
}