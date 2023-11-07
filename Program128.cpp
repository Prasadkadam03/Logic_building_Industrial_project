// Problem Statement : Pattern printing.
/*

Enter number of Rows :
5
Enter number of Columns :
5


$       *       *       *       *
*       $       1       1       *
*       0       $       1       *
*       0       0       $       *
*       *       *       *       $


*/

#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow;
        int iCol;
    
    public:
        Pattern(int X, int Y)
        {
            iRow = X;
            iCol = Y; 
        }

        void Display()
        {
            int i = 0, j = 0;

            for(i = 1 ; i <= iRow ; i++)
            {
                for(j = 1 ; j <= iCol ; j++)
                {
                    if(i == j)
                    {
                        cout<< "$\t";
                    }
                    else if((i == 1) ||(i == iRow) ||(j == iCol) ||(j == 1) )
                    {
                        cout<<"*\t";
                    }
                    else if(i > j)
                    {
                        cout<<"0\t";
                    }
                    else if(i < j)
                    {
                        cout<<"1\t";
                    }
                    else
                    {
                        cout<<"*\t";
                    }
                }
                cout<<endl;
            }
        }
    
        // Logics
    // End of class
};

int main()
{
    int iValue1 = 0,iValue2 = 0;

    cout<<"Enter number of Rows :"<<endl;
    cin>>iValue1;

    cout<<"Enter number of Columns :"<<endl;
    cin>>iValue2;   

    Pattern *pobj = new Pattern(iValue1,iValue2);

    pobj->Display(); 

    return 0;
}