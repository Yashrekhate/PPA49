#include<iostream>
using namespace std;
class demo 
{
    public:
    int i,j;
    static int k;
    base ()
    {
        i = 10;
        j = 20;
    }
    void fun()
    {
        cout<<"base fun";
    }
};
int base ::k =11;
class derived:public demo
{
    public :
    int x,y;
    derived()
    {
        x = 50;
        y = 60;
    }
    void gun()
    {
        cout<<"derived fun";
    }
};
int main ()
{
    base bobj();
    derived dobj();
    cout<<sizeof(bobj);
    cout<<sizeof(dobj);

    cout<<bobj.i;
    cout<<bobj.j;
    cout<<dobj.i;
    cout<<dobj.j;
    cout<<bobj.x;
    cout<<bobj.y;
   
   bobj.fun();
   bobj.fun();
   dobj.gun();

   return 0;



}













