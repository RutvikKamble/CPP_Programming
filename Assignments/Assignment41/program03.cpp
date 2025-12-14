//  Write a recursive program which accept number from user and return summation of that number
//  Input : 789
//  output : 24

#include<iostream>
using namespace std;

int Strlen(char iNo[])
{
    static int iCount = 0;
    while(*iNo != '\0')
    {
        iCount++;
        iNo++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n]s",&Arr);

    iRet = Strlen(Arr);

    printf("Number of character in string : %d",iRet);

    return 0;
}