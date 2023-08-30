#include<iostream>
using namespace std;
int gcd(int a, int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}
int main()
{
    int num1,num2;
    cout<<"Enter the two numbers";
    cin>>num1>>num2;
    cout<<"GCD of two number is "<<gcd(num1,num2)<<endl;
    cout<<"LCM of two number is "<<lcm(num1,num2)<<endl;
 return 0;
}