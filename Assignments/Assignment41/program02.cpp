//  Write a recursive program which accept number from user and return summation of that number
//  Input : 789
//  output : 24

#include<iostream>
using namespace std;

int Summation(int iNo)
{
    static int iSum = 0;
    if(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
        Summation(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("The summetion of : %d", iRet);

    return 0;
}