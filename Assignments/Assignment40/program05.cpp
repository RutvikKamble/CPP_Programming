//  Write a recursive program to display below pattern
//  Input : 6
//  A   B   C   D   E   F


#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int iCnt = 0;
    static char ch = 'a';

    while(iCnt != iNo)
    {
        cout<<ch<<"\t";
        iCnt++;
        ch++;
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