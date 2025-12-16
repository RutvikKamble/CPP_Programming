//  Write a recursive program which accept String from user and count number of character
//  Input : Hello
//  output : 5

#include<iostream>
using namespace std;

int Strlen(char ch[])
{
    static int iCount = 0;
    if(*ch != '\0')
    {
        iCount++;
        ch++;
        Strlen(ch);
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