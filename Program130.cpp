// Problem Statement : Pattern printing.


#include<iostream>
using namespace std;

class String
{
    private:
        char *str;
        int iSize;
    
    public:
        String()                // Default constructer
        {
            iSize = 20;
            str = new char(20);
        }

        String(int X)       // Parameterize constructer
        {
            iSize = X;
            str = new char(iSize);
        }

        ~String()
        {
            delete []str;
        }

        void Accept()
        {
            cout<<"Enter the string : "<<endl;
            cin.getline(str , iSize);
        }
        void Display()
        {
            cout<<"String is :"<<str<<endl;
        }
        // Logics
    // End of class
};

int main()
{
    String sobj(30);

    sobj.Accept();
    sobj.Display();
  
    return 0;
}