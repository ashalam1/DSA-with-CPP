#include<iostream>
using namespace std;

void printRowSum(int arr[][3],int row, int col){
    cout<<"Printing the sum row wise-->"<<endl;
    for(int row=0; row<3; row++){
        {
            int sum=0;
            for(int col=0; col<3; col++){
                sum=sum+arr[row][col];
            }
            cout<< sum<<" ";
        }
        cout<<endl;
    }

}

void printColSum(int arr[][3],int row, int col){
    cout<<"Printing the sum column wise-->"<<endl;
    for(int col=0; col<3; col++){
        {
            int sum=0;
            for(int row=0; row<3; row++){
                sum=sum+arr[row][col];
            }
            cout<< sum<<" ";
        }
        // cout<<endl;
    }

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
    printRowSum(arr,3,3);
    printColSum(arr,3,3);
 return 0;
}