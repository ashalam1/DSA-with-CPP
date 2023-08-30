#include<iostream>
using namespace std;
int countSetBits(int num){
    int count=0;
    while(num>0){
        count+=num&1;
        num>>=1;
    }
    return count;
}
int main()
{
    int num1,num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;
    int TotalSetBits=countSetBits(num1)+countSetBits(num2);
    cout<<"Total set bits in the two numbers: "<<TotalSetBits<<endl;
 return 0;
}