//  Write a recursive program which accept number from user and return Factorial of that number
//  Input : 5
//  output : 120

#include<iostream>
using namespace std;

int Factorial(int iNo)
{
    static int iFact = 1;
    while(iNo != 0)
    {
        iFact = iFact * iNo;
        iNo--;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("The summetion of : %d", iRet);

    return 0;
}