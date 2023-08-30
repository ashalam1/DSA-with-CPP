#include<iostream>
using namespace std;
  
   void reverse(char name[], int n){
    int s=0;
    int e=n-1;
     while(s<e){
        swap(name[s],name[e]);
              s++;
              e--;
    }
   }
   int getlength(char name[]){
        int count=0;
        for(int i=0; name[i]!='\0'; i++){
            count++;
        }
        return count;

   }
int main()
{
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"your name is "<<name<<endl;
    int length=getlength(name);
    cout<<length<<endl;
    reverse(name,length);
    cout<<"your name is "<<name<<endl;

 return 0;
}