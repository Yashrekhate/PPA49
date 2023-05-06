#include<iostream>

using namespace std;

class demo
{
    public:
       int no1;
       int no2;

       void fun()
       {
        cout<<"inside fun\n"<<"\n";
       }
};
int main ()
{
    demo obj1;
    demo obj2;
     
     cout <<"size of object :"<<sizeof (obj1)<<"\n";  //8
    obj1.no1 = 11;
    obj1.no2 = 20;

    obj2.no1 = 30;
    obj2.no2 = 40;
    
    obj1.fun();   //inside fun
    obj2.fun();   //inside fun

    cout<<obj1.no2<<"\n";     //20
    cout<<obj1.no1<<"\n";
    cout<<obj2.no2<<"\n";
    cout<<obj2.no1<<"\n";

    return 0;
}


// class = characteristics + bahaviours
// class = data + function