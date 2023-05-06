#include<iostream>
using namespace std;

class demo
{
    public :
       int a;
       int b;
       const int c;
       const int d;

       demo():c(11), d(21)
       {
           a = 0;
           b = 0;
       }
       demo (int i,int j, int k, int l) : c(k),d(l)
       {
         a = i;
         b = j;
       }
}

int main ()
{
    demo obj1;
    demo obj2{11,21,51,101}


    cout<<obj.a<<"\n";
    cout<<obj.b<<"\n";
    cout<<obj.c<<"\n";
    cout<<obj.<<"\n";

    return 0;
}