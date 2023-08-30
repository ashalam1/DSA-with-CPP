#include<iostream>
using namespace std;
void update(int **p){
   // p=p+1;

    //*p=*p+1;

     **p=**p+1;


}
int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;

    cout<<endl<<endl;
    cout<<"Befor "<<i<<endl;
    cout<<"Befor "<<p<<endl;
    cout<<"Befor "<<p2<<endl;
    update(p2);
    cout<<endl<<endl;
    cout<<"After "<<i<<endl;
    cout<<"After "<<p<<endl;
    cout<<"After "<<p2<<endl;
 return 0;
}