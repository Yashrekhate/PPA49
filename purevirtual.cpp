#include<iostream>
using namespace std;
//abastract class : the class contain at least one  pure virtual key word function in it

class Base 
{
    public:
    int A,B;         //1000;
    int Addition (int i,int j)  // concrete funtion 
    
    {
        return i + j;
    }               //2000

    virtual int Substraction (int i, int j)  //concrete funtion
    {
        return i - j;
    }
    virtual int Multiplication ( int i, int j)=0;  // abstract funtion

};

class Derived : public Base
{
    public :
     int X,Y;    //3000
     int Substraction (int i, int j)   //concrete funtion
     {
        int ans = 0;
        ans = i -j;
        return ans ;
     }
     int multiplication(int i, int j)   // concrete function
     {
        return i*j;
     }
};

int main ()
{
    base bobj;
     base*bp = new derived ();
    int ret = 0;
    

    ret = bp->Addition(10,11);
    cout<<"Addition id :"<<ret<<"\n";

    ret = bp->Substraction(10,11);
    cout<<"Addition is :"<<ret<<"\n";

   // ret = bp->multiplication(10,11);
   // cout<<"Addition is :"<<ret<<"\n";

    return 0;

}











