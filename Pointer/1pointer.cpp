#include<iostream>
using namespace std;
int main()
{
    int num=5;
    cout<<"num: "<<num<<endl;
     // adress operator-->&
     cout<<"adress : "<<&num<<endl;


    int *ptr=&num;
    cout<<"Address is "<<ptr<<endl;
    cout<<"value  is "<<*ptr<<endl;

    double d=5.33;
    double *p2=&d;
    cout<<"Address is "<<p2<<endl;
    cout<<"value  is "<<*p2<<endl;

    cout<<"size of integer is "<<sizeof(num)<<endl;
    cout<<"size of pointer is "<<sizeof(ptr)<<endl;
   cout<<"size of pointer is "<<sizeof(p2)<<endl;

 return 0;
}