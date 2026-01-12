// Write generic program reverse the array

#include<iostream>
using namespace std;

template<class T>
void Display(T *Arr, int No)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < No; iCnt++)
    {
        cout<<Arr[iCnt];
        cout<<"\t";
    }
    cout<<"\n";
}

template<class T>
void Reverse(T *Arr, int No) 
{
    int iCount = 0;
    T iValue = T();

    while (iCount < No)
    {
        iValue = Arr[iCount];
        Arr[iCount] = Arr[No-1];
        Arr[No-1] = iValue;

        iCount++;
        No--;
    }
    cout<<"\n";
}

int main()
{
    int *Arr = nullptr;  
    
    int iCnt = 0, iSize = 0;

    cout<<"Enter the number how many value that you print : ";
    cin>>iSize;

    Arr = new int[iSize];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<"Enter number : ";
        cin>>Arr[iCnt]; 
    }

    Display(Arr, iSize);
    Reverse(Arr, iSize);
    Display(Arr, iSize);

    delete []Arr;
    return 0;
}
