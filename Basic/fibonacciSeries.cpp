#include<iostream>
using namespace std;
int main()
{
    int t1=0,t2=1,nextterm,n;
    cout<<"Enter the Number of Terms"<<endl;
    cin>>n;
    cout<<"Fibonacci Series are:"<<t1<<","<<t2;
    for(int i=0;i<n;i++)
    {
       nextterm=t1+t2;
       t1=t2;
       t2=nextterm;
       cout<<","<<nextterm;
    }
 return 0;
}