#include <iostream>
using namespace std;
class demo 
{
    public 
    int a,b;
    static int x,y;

    demo()
    {
        //initialization of non static characteristic 
    }

    void fun ()   //void fun (demo *this)
    {
        cout<<"inside non static function fun"<<"\n";
        cout<<"value of a :"<<this->a<<
    }
    static void gun   //static void gun ()
    {
           cout<<"inside  static function gun"<<"\n";
    }
};

int demo :: x = 10;
int demo :: y = 20

int main ()
{
   demo::gun();

   return 0;
}