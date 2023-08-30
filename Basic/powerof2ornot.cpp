#include<iostream>
using namespace std;
int main()
{
    int n;
    int count=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0){
        count+=n&1;
        n>>=1;
    }
    if(count==1){
        cout<<"number is power of 2 "<<endl;
    }
    else{
        cout<<"number is not power of 2 "<<endl;
    }
   return 0;
}