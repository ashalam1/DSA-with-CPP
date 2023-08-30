#include<iostream>
using namespace std;
int nthFib(int num){
    if(num<=1){
        return num;
    }
    int a=0;
    int b=1;
    int next_term=0;
    for(int i=2;i<=num;i++){
        next_term=a+b;
        a=b;
        b=next_term;
    }
    return next_term;

}
int main()
{
    int num;
    cout<<"Enter the number of term to print: ";
    cin>>num;
    cout<<"nth term is :"<<nthFib(num);

 return 0;
}