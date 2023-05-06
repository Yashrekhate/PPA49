#include<iostream>
using namespace std;

class demo
{
    public:
      int a;
      int b;

     
      demo(int i = 10, int j = 20)
      {
         a = i;
         b = j;
      }
};
int main()
{
    demo obj1;        //10,20
    demo obj2(11);     // 11  20
    demo obj3(11, 21);   // 11  21

    cout<<obj1.a<<"\t"<<obj1.b<<"\n";
    cout<<obj2.a<<"\t"<<obj2.b<<"\n";
    cout<<obj3.a<<"\t"<<obj3.b<<"\n";
   return 0;
}