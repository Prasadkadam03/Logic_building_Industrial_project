// Problem Statement : Pattern printing.


#include<iostream>
using namespace std;

class String
{
    private:
        char *str;
    
    public:
        String()                // Default constructer
        {
            str = new char(20);
        }

        String(int iSize)       // Parameterize constructer
        {
            str = new char(iSize);
        }

        ~String()
        {
            delete []str;
        }

        void Accept()
        {
            cout<<"Enter the string : "<<endl;
            gets(str);
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