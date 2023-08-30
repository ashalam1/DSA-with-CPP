#include<iostream>
#define N 4
using namespace std;
void transposeArr(int A[][N], int B[][N]){
    for(int row=0; row<4; row++){
         for(int col=0; col<4; col++){
            B[col][row]=A[row][col];
         }
    }
}
int main()
{
    
    int a[N][N]=    {{1,1,1,1},
                             {2,2,2,2},
                             {3,3,3,3},
                             {4,4,4,4}};
    int b[N][N],j,i;
    transposeArr(a,b);
    cout<<"result matrix is "<<endl;
    for(int i=0; i<N; i++){
         for(int j=0; j<N; j++){
            cout<<" "<<b[i][j];
            
         }
         cout<<endl;
    }
   return 0;
}
