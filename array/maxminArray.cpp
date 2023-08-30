#include<iostream>
using namespace std;


int getMax(int arr[], int n){

     int maxi =-2147483647 - 1;
     for(int i=0;i<n;i++)
     {
        maxi=max(maxi,arr[i]);
     }
     return maxi;
}

int getMin(int arr[], int n){

     int mini =2147483647;
     for(int i=0;i<n;i++)
     {
        mini=min(mini,arr[i]);
     }
     return mini;
}
int main()
{
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
     cout << " Maximum value is " << getMax(num, size) << endl;
     cout << " Minimum value is " << getMin(num, size) << endl;
 return 0;
}