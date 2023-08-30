#include<iostream>
using namespace std;
int main()
{   int num,originalNum, rem,reversed=0;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"num:"<<num<<endl;
    originalNum = num;
    while (num!=0)
    {
        rem=num%10;
        reversed=reversed*10+rem;
        num=num/10;
    }
    cout<<"Reversed num="<<reversed<<endl;
    if(originalNum==reversed){
        cout<<"Number is palindrome number"<<endl;
    }
    else{
         cout<<"Number is not a palindrome number"<<endl;
    }
 return 0;
}