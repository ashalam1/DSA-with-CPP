#include<iostream>
using namespace std;
int main()
{
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    name[2]='\0';// prints only first two char because after null character compiler terminates..

    cout<<"your name is "<<name<<endl;
 return 0;
}