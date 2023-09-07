#include<iostream>
using namespace std;
int partion(int arr[], int s, int e){
    int pivot=arr[s];

    int count=0;
    for(int i=s+1; i<e; i++){
        if(arr[i]<pivot){
        count++;
        }
    }

int pivotIndex=s+count;
swap(arr[s],arr[pivotIndex]);

int i=s; int j=e;
while(i<pivotIndex && j>pivotIndex){
    while(arr[i]<pivot){
        i++;
    }
    while(arr[j]>pivot){
        j--;
    }
    if(i<pivotIndex && j>pivotIndex){
        swap(arr[i++],arr[j++]);
    }
}
}

void QuikSort(int arr[], int s, int e){
    if(s>e){
        return;
    }
    int p=partion(arr,s,e);
    QuikSort(arr,s,p-1);
    QuikSort(arr,p+1,e);

}
int main()
{
    int arr[5]={1,4,7,3,8};
    int n=5;
    QuikSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
 return 0;
}