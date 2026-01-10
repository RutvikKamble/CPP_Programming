// Write generic program to accept n values from user and return addition of that values

#include<iostream>
using namespace std;

template<class T>
void Display(T *Arr, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        cout<<Arr[iCnt];
        cout<<"\t";
    }
    cout<<"\n";
}

template<class T>
T Addition(T *Brr, int iSize)
{
    T Count = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Count = Count + Brr[iCnt];
    }

    return Count;
}

int main()
{
    int *Arr = nullptr;
    
    int iCnt = 0, iSize = 0, iValue = 0;
    int iRet = 0;

    cout<<"Enter the number how many value that you print : ";
    cin>>iSize;

    Arr = new int[iSize];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<"Enter number : ";
        cin>>Arr[iCnt];
    }

    Display(Arr, iSize);

    iRet = Addition(Arr, iSize);

    cout<<"The addition of given N numbers is : "<<iRet;


    delete []Arr;

    return 0;
}