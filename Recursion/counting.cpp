#include<iostream>
using namespace std;

void counting(int n){
    if(n==0){
        return;
    }
    counting(n-1);
    cout<<n<<" ";
}


// void counting(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<" ";
//     counting(n-1);
// }
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    counting(n);
    
 return 0;
}