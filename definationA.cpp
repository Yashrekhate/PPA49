#include<iostream>
using namespace std;
class demo
{
    public:
      void fun(int i)
      {
        cout<<"first defination"<<"\n";
      }
      void fun(int i, int j)
      {
        cout<<"second defination"<<"\n";
      }
};
int main ()
{
     obj ();
      obj1 (10);
    obj2 (10,20);

    cout<<"obj1.i"<<"\n";
    cout<<"obj2.i"<<"\n";
    cout<<"obj2.j"<<"\n";
    return 0;
}