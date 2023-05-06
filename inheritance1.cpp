#include<iostream>
using namespace std;

class demo 
{
   public :
   int a, b;
   static int x,y;

   demo ()
   {
    a =0;
    b =0;
   };
};

int demo :: x =10;
int demo :: y =20;

int main ()
{
    cout<<"value of x:"<<demo :: x<<"\n";
    cout <<"value of y:"<<demo:: y<<"\n";

    demo obj1;
    demo obj2;

    cout <<"value of a from obj1 :"<<obj1.a<<"\n";
    cout<<"valur of a from obj2 :"<<obj2.a<<"\n";

    obj1.a++;

    cout<<"value of a from obj1 :"<<obj1.a<<"\n";
    cout<<"valur of a from obj2:"<<obj2.a<<"\n";

    cout<<"value of x from obj1 :"<<obj1.x<<"\n";
    cout<<"value of x from obj2 :"<<obj2.x<<"\n";











    return 0;
}