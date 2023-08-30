#include<iostream>
using namespace std;
void update1(int n){
    n++;
}

void update2(int &n){
    n++;
}
int main()
{
    /*
     int i=5;
    int &j=i;

    cout<<i<<endl;
    cout<<j<<endl;

    i++;
    cout<<endl;
    cout<<i<<endl;
    cout<<j<<endl;

    j++;

    cout<<endl;
    cout<<i<<endl;
    cout<<j<<endl;

    */
   int n=10;
   cout<<"Before "<<n<<endl;
   update2(n);
   cout<<"After "<<n<<endl;
 return 0;
}