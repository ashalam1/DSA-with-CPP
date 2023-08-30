//sum of all the element of a given array
#include<iostream>
using namespace std;
int ArrSum(int arr[],int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    return sum;

}
int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the elements of the arrray: ";
    int arr[100];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
 cout<<"Sum of all elements in the array is equal to "<<ArrSum(arr,size);
 return 0;
}