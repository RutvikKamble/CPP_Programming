//  Write a recursive program to display below pattern
//  Input : 5
//  5   4   3   2   1


#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int iCnt = iNo;

    if(iCnt > 0)
    {
        cout<<iCnt<<"\t";
        iCnt--;
        iNo--;
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