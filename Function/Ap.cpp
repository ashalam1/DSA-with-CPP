#include<iostream>
using namespace std;
//Finding nth term of ap
int Ap(int n){
    int nth_term=3*n+7;
    return nth_term;
}
int main()
{
    int num;
    cin>>num;
    cout<<"nth term of the ap (3*n+7) is "<<Ap(num);
 return 0;
}