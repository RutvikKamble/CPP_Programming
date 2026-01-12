// Write generic program to to search value in array

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
bool Search(T *Arr, int iSize, T No)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int *Arr = nullptr;  
    
    int iCnt = 0, iSize = 0, iValue = 0;
    bool bRet = false;

    cout<<"Enter the number how many value that you print : ";
    cin>>iSize;

    Arr = new int[iSize];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<"Enter number : ";
        cin>>Arr[iCnt];
    }

    Display(Arr, iSize);

    cout<<"Enter the number which has to search : ";
    cin>>iValue;

    bRet = Search(Arr, iSize, iValue);

    if(bRet == true)
    {
        cout<<iValue<<"  is present in the Array";
    }
    else
    {
        cout<<iValue<<"  is not present in the Array";
    }
    
    delete []Arr;
    return 0;
}
