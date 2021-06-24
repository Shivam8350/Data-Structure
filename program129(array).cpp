// Accept N numbers from user and perforn the addition of that N numbers

#include <iostream>
using namespace std;

class Array
{
private:
    int *Arr;
    int iSize;
    
public:
    Array(int);
    ~Array();
    void Accept();
    void Display();
    int Addition();
};

Array :: Array(int iNo)
{
    cout<<"Inside constructor\n";
    iSize = iNo;
    Arr = new int[iSize];
}

Array::~Array()
{
    cout<<"Inside Destructor\n";
    delete []Arr;
}

void Array :: Accept()
{
    cout<<"Enter the elements\n";
    for(int i = 0; i< iSize; i++)
    {
        cin>>Arr[i];
    }
}

void Array::Display()
{
    cout<<"Elements of array are\n";
    for(int i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
}

int Array::Addition()
{
    int iSum = 0;
    for(int i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    int iNo = 0, iRet = 0;
    
    cout<<"Enter the size of Array\n";
    cin>>iNo;
    
    Array *obj = new Array(iNo);    // Call to the constructor
    
    obj->Accept();
    obj->Display();
    
    iRet = obj->Addition();
    cout<<"Addition of all elements is : "<<iRet<<"\n";
    
    delete obj;     // Call to the destructor
    
    return 0;
}
