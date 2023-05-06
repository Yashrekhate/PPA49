#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main ()
{
    int arr[5];       //static memiry allocation

    int *p = NULL;
    P - (int *)malloc(5 *sizeof (int ));  //dyanmic allocation using malloc

    int *q = NULL;
    q =(int *)calloc (5,sizeof(int ));   // dyanamic allocation using calloc
   
    int *x = NULL;
    x = new int [5];


    free(p);
    free(q);
    
    delete  [] x;

    return 0;
}