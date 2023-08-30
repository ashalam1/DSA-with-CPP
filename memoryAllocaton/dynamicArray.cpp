#include<iostream>
using namespace std;
int GetSum(int *a,int n){
    int sum=0;
     for(int i=0; i<n; i++){
        sum+=a[i];
     }
     return sum;
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans=GetSum(arr,n);
    cout<<"Sum of array is "<<ans<<endl;
 return 0;
}