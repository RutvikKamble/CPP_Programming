// Write generic program to find sum of all even element

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
T SumEven(T *Arr, int iSize)
{
    int iCnt = 0;
    T iSum = T();

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSum = iSum + Arr[iCnt];
        }
    }

    return iSum;
}

int main()
{
    int *Arr = nullptr;  
    
    int iCnt = 0, iSize = 0;
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
    iRet = SumEven(Arr, iSize);

    cout<<"Sum of all even elements : "<<iRet;
    
    delete []Arr;
    return 0;
}
