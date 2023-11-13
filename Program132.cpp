// Problem Statement : Accept String and return number of capital numbers.


#include<iostream>
using namespace std;

class String
{
    private:
        char *str;
        int iSize;
        char *temp = str;
    
    public:
        String()                // Default constructer
        {
            iSize = 20;
            temp = new char[20];
        }

        String(int X)       // Parameterize constructer
        {
            iSize = X;
            temp = new char[iSize];
        }

        ~String()
        {
            delete []temp;
        }

        void Accept()
        {
            cout<<"Enter the string : "<<endl;
            cin.getline(temp , iSize);
        }
        void Display()
        {
            cout<<"String is :"<<temp<<endl;
        }
        int CountCapital()
        {
            int iCnt = 0;

            while( *temp != '\0')
            {

                if((*temp >= 'A') && (*temp <= 'Z'))
                {
                    iCnt++;
                }
                temp++;

            }
        return iCnt;
        }
        // Logics
    // End of class
};

int main()
{

    String *sobj = new String(30);
    int iRet = 0;

    sobj->Accept();
    sobj->Display();

    iRet = sobj->CountCapital();

    cout<<"Number of capital are :"<<iRet;
    delete sobj;
    return 0;
}