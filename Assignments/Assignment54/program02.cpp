// Write generic to check whether array is sorted

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
void CheckSort(T *Arr, int iSize)
{
    int iCnt = 0;
    
    bool isAscending = true;
    bool isDescending = true;

    for(iCnt = 0; iCnt < iSize-1; iCnt++)
    {
        if(Arr[iCnt] > Arr[iCnt + 1])
        {
            isAscending = false;
        }

        if(Arr[iCnt] < Arr[iCnt + 1])
        {
            isDescending = false;
        }
    }

    if(isAscending == true)
    {
        cout << "Array is sorted in Ascending order";
    }
    else if(isDescending == true)
    {
        cout << "Array is sorted in Descending order";
    }
    else
    {
        cout << "Array is not sorted";
    }
}

/*
template<class T>
void CheckSort(T *Arr, int iSize)
{
    int iCnt = 0, iCheck = 0;
    int iCount1 = 0, iCount2 = 0;

    iCheck = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] >= iCheck)
        {
            iCheck = Arr[iCnt];
            iCount1++;
        }
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] <= iCheck)
        {
            iCheck = Arr[iCnt];
            iCount2++;
        }
    }
    
    if(iCount1 == iSize)
    {
        cout<<"Array is sorted in the Ascending order";
    }
    else if (iCount2 == iSize)
    {
        cout<<"Array is sorted in the Decending order";
    }
    else
    {
        cout<<"Array is not sorted";
    }   
}
*/

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

    CheckSort(Arr, iSize);


    delete []Arr;

    return 0;
}
