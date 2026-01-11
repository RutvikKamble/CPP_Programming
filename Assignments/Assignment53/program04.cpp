// Write generic program to find second smallest element.

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
T SecondSmall(T *Arr, int iSize)
{
    int iCnt = 0;
    T Small = T(), SecSmall = T();


    if(iSize == 1)
    {
        cout<<"Array contain only one element";
        return;
    }
    else
    {
        if(Arr[0] < Arr[1])
        {
            Small = Arr[0];
            SecSmall = Arr[1];
        }
        else
        {
            Small = Arr[1];
            SecSmall = Arr[0];
        }

        for(iCnt = 2; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] < Small)
            {
                SecSmall = Small;
                Small = Arr[iCnt];
            }
            else if(Arr[iCnt] < SecSmall && Arr[iCnt] != Small)
            {
                SecSmall = Arr[iCnt];
            }
        }
    }
    return SecSmall;
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

    iRet = SecondSmall(Arr, iSize);

    cout<<"The second smallest number from the array is : "<<iRet;


    delete []Arr;

    return 0;
}
