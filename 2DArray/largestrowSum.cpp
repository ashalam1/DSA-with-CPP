#include<iostream>
#include<limits.h>
using namespace std;

int largestSum(int arr[][3],int row,int col){
    cout<<"Printing the sum row wise-->"<<endl;
    int maxi=INT_MIN;
    int RowIndex=-1;
    for(int row=0; row<3; row++){
            int sum=0;
            for(int col=0; col<3; col++){
                sum=sum+arr[row][col];
            }
            if(sum>maxi){
                maxi=sum;
                RowIndex=row;
            }
    }
    cout<<"the maximum sum is "<<maxi<<endl;
    return RowIndex;

}
int main()
{
    int arr[3][3];
    cout<<"Enter the elements"<<endl;
    for(int i=0; i<3; i++){
        {
            for(int j=0; j<3; j++){
                cin>>arr[i][j];
            }
        }
    }
    cout<<"printing the  elements"<<endl;
    for(int i=0; i<3; i++){
        {
            for(int j=0; j<3; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
    int ans=largestSum(arr,3,3);
    cout<<"maximum sum is at index "<<ans<<endl;
 return 0;
}