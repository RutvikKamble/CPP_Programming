// Write generic program to replace of all occurances of values.

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
void Replace(T *Arr, int iSize, T OldValue, T NewValue)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == OldValue)
        {
            Arr[iCnt] = NewValue;
        }
    }
}

int main()
{
    int *Arr = nullptr;
    
    int iCnt = 0, iSize = 0, iValue1 = 0, iValue2 = 0, iRet = 0;

    cout<<"Enter the number how many value that you print : ";
    cin>>iSize;

    Arr = new int[iSize];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<"Enter number : ";
        cin>>Arr[iCnt];
    }

    Display(Arr, iSize);

    cout<<"Enter the value which has to be replace : ";
    cin>>iValue1;

    cout<<"Enter the number which has to be put : ";
    cin>>iValue2;

    Replace(Arr, iSize, iValue1, iValue2);
    cout<<"Updated Data : ";
    Display(Arr, iSize);
    
    delete []Arr;

    return 0;
}
