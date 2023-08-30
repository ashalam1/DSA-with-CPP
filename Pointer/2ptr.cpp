#include<iostream>
using namespace std;
int main()
{
    int i=5;
    int *p=0;
    p=&i;
    cout<<p<<endl;
    cout<<*p;

    int num=7;
    cout<<"Before "<<num<<endl;
    int *ptr=&num;
    (*ptr)++;
    cout<<"after "<<num<<endl;

    //copying a pointer
    int *q=p;
    cout<<p<<"--"<<q<<endl;
    cout<<*p<<"--"<<*q<<endl;
 return 0;
}