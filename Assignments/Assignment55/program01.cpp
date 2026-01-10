// Write generic program to cpoy one array into another array

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
void CopyArray(T *Arr, T*Brr, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Brr[iCnt] = Arr[iCnt];
    }

    //cout<<"Copied Array is : ";
    //Display(Brr, iSize);
}

int main()
{
    int *Arr = nullptr;
    int *Brr = nullptr;    
    
    int iCnt = 0, iSize = 0, iValue = 0;

    cout<<"Enter the number how many value that you print : ";
    cin>>iSize;

    Arr = new int[iSize];
    Brr = new int[iSize];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<"Enter number : ";
        cin>>Arr[iCnt];
    }

    Display(Arr, iSize);
    //Display(Brr,iSize);
    CopyArray(Arr, Brr, iSize);
    cout<<"Copied Array is : ";
    Display(Brr, iSize);

    delete []Arr;
    delete []Brr;

    return 0;
}


/*

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
void CopyArray(T *Arr, int iSize)
{
    T *Brr = nullptr;

    Brr = new T[iSize];

    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Brr[iCnt] = Arr[iCnt];
    }

    cout<<"Copied Array is : ";
    Display(Brr, iSize);

    delete []Brr;
}

int main()
{
    int *Arr = nullptr;
    
    int iCnt = 0, iSize = 0, iValue = 0;

    cout<<"Enter the number how many value that you print : ";
    cin>>iSize;

    Arr = new int[iSize];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<"Enter number : ";
        cin>>Arr[iCnt];
    }

    Display(Arr, iSize);
    CopyArray(Arr, iSize);


    delete []Arr;

    return 0;
}

*/