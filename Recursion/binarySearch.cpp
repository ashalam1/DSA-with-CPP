#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart=isSorted(arr+1,size-1);
        return remainingPart;
    }
}
int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int size=10;
    bool ans=isSorted(arr,size);
    if(ans){
        cout<<"Array is soreted";
    }
    else{
        cout<<"Array is not soreted";
    }

 return 0;
}