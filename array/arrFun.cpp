#include<iostream>
using namespace std;

int CalculateSum(int arr[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    const int size=5;
    int numbers[size];
    cout<<"Enter "<<size<<" numbers";
      for(int i=0;i<size;i++){
        cin>>numbers[i];
      }

      int sum=CalculateSum(numbers,size);
      cout<<"sum of the numbers: "<<sum<<endl;
 return 0;
}