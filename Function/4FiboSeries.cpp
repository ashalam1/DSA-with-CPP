#include<iostream>
using namespace std;

int Fibo(int n){
    int a=0,b=1,nextNum=0;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        nextNum=a+b;
        a=b;
        b=nextNum;
    }
    
}
int main()
{
    int num;
    cout<<"Enter the number term to be print: ";
    cin>>num;
    cout<<"Fibonacci Series: ";
    Fibo(num);
 return 0;
}