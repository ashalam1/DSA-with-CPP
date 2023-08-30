#include<iostream>
using namespace std;
bool keyfound(int arr[],int N,int K){
    if(N==0) return false;
    if(arr[0]==K){
        return true;
    }
    bool remainingPart=keyfound(arr+1,N-1,K);
    return remainingPart;
}
int main()
{
    int arr[5]={2, 3, 6 , 9 ,7};
    int size=5;
    int k=8;
    bool ans=keyfound(arr,size,k);
    if(ans){
        cout<<"Key found";
    }
    else{
        cout<<"Key not found";
    }
 return 0;
}