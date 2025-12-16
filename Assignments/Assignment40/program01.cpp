//  Write a recursive program to display below pattern
//  Input : 5
//  *   *   *   *   *

#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        cout<<"*\t";
        iCnt++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the value : ");
    scanf("%d",&iValue);

    Display(iValue);    

    return 0;
}