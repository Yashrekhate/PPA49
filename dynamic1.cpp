#include<iostream>
using namespace std;

class demo 
{
    public:

    int a,b;

    demo()
    {
        cout <<"inside default constructor"<<"\n";
    }
    demo (int i, int j)
    {
        cout << "inside parametrised constructor"<<"\n";
    }
    ~demo()
    {
        cout <<"inside destructor"<<"\n";
    }
};
int  main()

{   
    cout<<"inside main"<<"\n";
    
    demo obj1;
    demo obj2(11,21);

    demo *p = new demo ();
    demo *q = new demo (11,21);
    
    delete  p;
    delete  q;

    cout<<"end of main "<<"\n";

    return 0;
}