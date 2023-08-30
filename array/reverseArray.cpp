#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    int rev[size];
    for(int i=size-1;i>=0; i--){
        cout<<arr[i]<<" ";
         
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[9]={2, 3, 4, 5,9};
    reverse(arr,n);
 return 0;
}