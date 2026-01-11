// Write generic program to find second largest element.

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
T SecondMax(T *Arr, int iSize)
{
    int iCnt = 0;
    T Max = T(), SecMax = T();

    if(iSize == 1)
    {
        cout<<"Array contain only one element";
        return;
    }
    else
    {
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] > Max)
            {
                SecMax = Max;
                Max = Arr[iCnt];
            }
            else if(Arr[iCnt] > SecMax && Arr[iCnt] != Max)
            {
                SecMax = Arr[iCnt];
            }
        }
    }
    return SecMax;
}

int main()
{
    int *Arr = nullptr;
    
    int iCnt = 0, iSize = 0, iValue = 0, iRet = 0;

    cout<<"Enter the number how many value that you print : ";
    cin>>iSize;

    Arr = new int[iSize];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<"Enter number : ";
        cin>>Arr[iCnt];
    }

    Display(Arr, iSize);

    iRet = SecondMax(Arr, iSize);

    cout<<"The second largest number from the array is : "<<iRet;


    delete []Arr;

    return 0;
}
