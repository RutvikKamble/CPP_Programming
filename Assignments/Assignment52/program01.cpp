// Write generic program to multiply two numbers

#include<iostream>
using namespace std;

template<class T>
T Multiply(T iNo1, T iNo2)
{
    T Ans = 0;
    Ans = iNo1 * iNo2;

    return Ans;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter the first number : ";
    cin>>iValue1;

    cout<<"Enter the second number : ";
    cin>>iValue2;

    int iRet = Multiply(iValue1,iValue2);

    cout<<"Multiplication of given tow number is : "<<iRet;
    
    return 0;
}