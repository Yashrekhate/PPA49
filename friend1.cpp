#include<iostream>
using namespace std;

class hello
{
    public:
      void gun ();
};

class marvellous
{
    public:
      void sun();
      void run();
};

class demo 
{
    public:
    int A;
    private:
    int B;
    protected:
    int C;

    public:
    demo(int i, int j, int k)
    {
        A = i;
        B = j;
        C = k;
        
    }
    friend void fun ();
    friend void hello ::gun();
    friend class marvellous ;

    };

    void hello ::gun()
    {
        demo obj(11,21,51);
        cout<<"value of A:"<<obj.A<<"\n";
        cout<<"valur of B :"<<obj.B<<"\n";
         cout<<"valur of C :"<<obj.C<<"\n";
    }
    void marvellous::sun()
    {
        demo obj(11,21,51);
       cout<<"valur of A :"<<obj.A<<"\n";
        cout<<"valur of B :"<<obj.B<<"\n";
         cout<<"valur of C :"<<obj.C<<"\n";
    }
  void marvellous::run()
  {
    demo obj (11,21,51);
     cout<<"valur of A :"<<obj.A<<"\n";
     cout<<"valur of B :"<<obj.B<<"\n";
     cout<<"valur of C :"<<obj.C<<"\n";
  }

  void fun ()
  {
    demo obj (11,21,51);
    cout<<"valur of A :"<<obj.A<<"\n";
    cout<<"valur of B :"<<obj.B<<"\n";
    cout<<"valur of C :"<<obj.C<<"\n";
  }
 
 int main()
{
    fun();

    hello hobj ;
    hobj.gun();

    marvellous mobj;
    mobj.sun();
    mobj.run();
    
    return 0 ;
    }

















