#include<iostream>

using namespace std;


typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    private:
        PNODE first;
        int Count;
    public:
        SinglyLL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void Display();
        int CountNode();
};

/*

Return_Value Class_Name :: Function_Name()

*/
SinglyLL :: SinglyLL()
{
    cout<<"Inside constructor \n";
    first = NULL;
    Count = 0;
}

void SinglyLL :: InsertFirst(int no)
{
    PNODE newn = NULL;

    newn = new NODE;
    newn -> data = no;
    newn -> next = NULL;

    if ( first == NULL)  // if(Count == 0)
    {
        first = newn;    
    }
    else
    {
        newn -> next = first;
        first = newn;
    }
    Count++;
}
void SinglyLL :: InsertLast(int no)
{
    PNODE newn = NULL;
    PNODE temp = first;

    newn = new NODE;
    newn -> data = no;
    newn -> next = NULL;

    if ( first == NULL)  // if(Count == 0)
    {
        first = newn;    
    }
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
        
    }
    Count++;
}

void SinglyLL :: Display()
{
    PNODE temp = first;

    cout<<"Elements of the Linked List are =";
    while(temp != NULL)
    {
        cout<<"| "<< temp -> data<< " | -> ";
        temp = temp -> next;
    }
    cout<<" NULL"<<endl;

    cout<<"No of elements in Linked List are = "<<Count << endl;
}

int SinglyLL :: CountNode()
{
    return Count;
}

int main()
{
    SinglyLL obj;
    int iRet = 0 ;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    obj.InsertLast(101);

    obj.Display();
    
    iRet = obj.CountNode();
    cout<<"No of elements in Linked List are = "<<iRet << endl;


    return 0;
}