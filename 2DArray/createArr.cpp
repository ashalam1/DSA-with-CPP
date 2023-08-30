#include<iostream>
using namespace std;
bool ispresent(int arr[][4],int row, int col, int target){
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            if(arr[row][col]==target)
            return 1;
        }
    }
    return 0;


}
int main()
{

    int arr[3][4];
    for(int i=0; i<3; i++){
        {
            for(int j=0; j<4; j++){
                cin>>arr[i][j];
            }
        }
    }

    for(int i=0; i<3; i++){
        {
            for(int j=0; j<4; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    if(ispresent(arr,3,4,13)){
        cout<<"target found"<<endl;
    }
    else{
        cout<<" target not found"<<endl; 
    }
 return 0;
}