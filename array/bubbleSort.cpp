#include<iostream>
using namespace std;
void  bubblesort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}
int main()
{
    int arr[8]={10, 1, 7, 6, 14, 9, 22, 29};
    bubblesort(arr,6);
    cout<<"Sorted Array: ";
    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

 return 0;
}