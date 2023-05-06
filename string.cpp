#include<iostream>
#include<string.h>
using namespace std;

int strlenx(char *str) //int strlenx (char *str)
{
    int icnt = 0;

    while(*str != '\0')
    {
        icnt++;
        str++;
    }
    return icnt;
}
int main ()
{
    char arr [20];
    int iret = 0;
    {

    cout<<"enter your first name :" <<"\n";
    cin>>arr;

    iret = strlenx(arr);
    }
    {
    cout<<"lentgth of name is :"<<iret<<"\n";
    }
    return 0;
}