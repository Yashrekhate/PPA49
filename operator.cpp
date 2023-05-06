using namespace std;
#include<iostream>

class demo 
{
    public :
      int a ;
      int b;
      demo (int i = 10, int j = 20)
      {
        a = i;
        b = j;
      }
      friend demo operator + (demo op1,demo op2);
};

demo operator + ( demo op1, demo op2)
{
    cout<<"inside + operator"<<"\n";
    return demo(op1.a+op2.a, op2.a+op2.b);
}
int main ()
{

    demo obj1 (11,21);
    demo obj2 (51,101);
    demo obj (0,0);

    obj = obj1 + obj2;
    cout<<obj.a<<"\n";
    cout<<obj.b<<"\n";


    return 0;
}