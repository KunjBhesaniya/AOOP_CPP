#include<iostream>
using namespace std;
int main()
{
    // int *p = new int[5];
    // p[0] = 12;
    // p[1] = 13;
    // cout<<p[1]<<endl;

    // delete []p;
    // p=nullptr;

    // int size;
    // cout<<"Enter number of Element : ";
    // cin>>size;
    // int A[size];

    // cout<<sizeof A<<endl;
    // size = 35;
    
    // int size;
    // cout<<"Enter number of Element : ";
    // cin>>size;
    // int *p = new int[size];

    // cout<<"Enter new Size : ";
    // cin>>size;
    // p = new int[size];


    int *p = new int[20];

    delete []p;
    p = new int[40];

    return 0;
}