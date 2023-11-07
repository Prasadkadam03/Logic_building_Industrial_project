// Problem Statement : Accept N number of elements form user and Display all elements and Addition of even elements.

#include<iostream>
using namespace std;

class Array
{
    private:
        int *Arr;
        int iSize;

    public:
        Array(int X)        // Parameterize comstructer
        {
            iSize = X;
            Arr = new int[iSize];
        }

        ~Array()            // Destructer
        {
            delete []Arr;
        }

        void Accept()       // Member function
        {
            int iCnt = 0;
            cout<<"Please enter the elements :"<< endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()      // Member function
        {
            cout<<"Elements of the array are :"<<endl;
            int iCnt = 0;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt] <<"\t";
            }
            cout<<endl;
        }

        int AdditiionEven()
        {
            int iSum = 0, iCnt = 0;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if((Arr[iCnt] % 2) == 0)
                {         
                    iSum = iSum + Arr[iCnt];
                }
            }

            return iSum;
        }
        // Logics
    // End of class
};

int main()
{
    int iLength = 0 , iRet = 0;

    cout<<"Enter the Number of elements that you want to store :"<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();
    iRet = aobj->AdditiionEven();

    cout<<"Addition of Even elements:"<<iRet<<endl;

    delete aobj;

    return 0;
}