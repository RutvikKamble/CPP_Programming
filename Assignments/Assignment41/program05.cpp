//  Write a recursive program which accept number from user and return summation of that number
//  Input : 523
//  output : 30

#include<iostream>
using namespace std;

int Mult(int iNo)
{
    static int iProd = 1;
    while(iNo != 0)
    {
        iProd = iProd * (iNo % 10);
        iNo = iNo / 10;
    }
    return iProd;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("The summetion of : %d", iRet);

    return 0;
}