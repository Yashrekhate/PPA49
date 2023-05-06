#include<iostream>
using namespace std;

float area(float radius, float PI)
{
    float ans = 0.0f;

    ans = PI * radius * radius;

    return ans ;
}

int main ()
{
    float r = 0.0;
    float fret = 0.0;

    cout<<"enter your radius :"<<"\n";
    cin>>r;

    fret = area(r,3.14f);

    cout<<"area of circle is :"<<fret<<"\n";
    return 0;
}

