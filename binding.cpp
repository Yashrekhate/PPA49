#include<iostream>
using namespace std;

class base
{
   public :
     int a,b;
    virtual void fun()            //1000
     {
        cout<<"inside fun of base"<<"\n";
     }
      virtual void gun()         //2000
     {
        cout<<"inside gun of base"<<"\n";
     }
     virtual void sun()         //3000
     {
        cout<<"inside sun of base"<<"\n";
     }
};
class derived :   public base
{
    public :
    int x,y;
   
     void fun()               //4000
     {
        cout<<"inside fun of derived"<<"\n";
     }
      virtual void run()  //5000
     {
        cout<<"inside gun of derived"<<"\n";
     }
     virtual void sun()  //6000
     {
        cout<<"inside sun of derived"<<"\n";
     }
};

int main ()
{
    cout<<"size of base :"<<sizeof(base)<<"\n";
    cout<<"size of derived :"<<sizeof(derived)<<"\n";

    base *bp = new derived ;

    bp->fun();       //derived fun
    bp->gun();       //base fun
    bp->sun();       //derived fun
    //bp->run();  //na  error


    return 0;
}