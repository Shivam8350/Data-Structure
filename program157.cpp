#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyLL
{
private:
    struct node<T> * Head;
    int iSize;
    
public:
    SinglyLL();
    void Display();
    int Count();
    void InsertFirst(T);
};

template <class T>
void SinglyLL<T> :: InsertFirst(T no)
{
    struct node<T> *newn = new struct node<T>;
    newn->data = no;
    newn->next = NULL;

    newn->next = Head;
    Head = newn;
    iSize++;
}

template <class T>
int SinglyLL<T> :: Count()
{
    return iSize;
}

template <class T>
void SinglyLL<T> :: Display()
{
    struct node<T> *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<"\n";
}

template <class T>
SinglyLL<T> :: SinglyLL()
{
    Head = NULL;
    iSize = 0;
}

int main()
{
    SinglyLL <char> obj;
    obj.InsertFirst('A');
    obj.InsertFirst('B');
    obj.InsertFirst('C');
    
    obj.Display();
    
    cout<<"Length of linked list is : "<<obj.Count()<<"\n";
    
    return 0;
}
