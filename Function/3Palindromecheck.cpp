#include<iostream>
using namespace std;
int reversed(int a){
    int reversed=0;
    int original_a=a;
    while(a!=0){
        int rem=a%10;
        reversed=reversed*10+rem;
        a=a/10;
    }
    return reversed;
}
char checkpalindrome(int b){
    if(reversed(b)==b){
        cout<<"Number is a palindrome number";
    }
    else{
          cout<<"Number is not a palindrome number";
    }
}
int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    cout<<"Reversed Number: "<<reversed(num)<<endl;
    cout<<checkpalindrome(num);
 return 0;
}