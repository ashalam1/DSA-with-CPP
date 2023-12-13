#include<iostream>
#include<stack>
using namespace std;
class Stack{
    //property
    public:
           int *arr;
           int top;
           int size;

           //behavior
           Stack(int size){
                this->size=size;
                arr=new int[size];
                top=-1;
              }
        void push(int Element){
            if(size-top>1){
                top++;
                arr[top]=Element;
            }
            else{
                cout<<"Stack is overflow"<<endl;
            }
        }   

        void pop(){
            if(top>=0){
                top--;
            }
            else{
                cout<<"Stack is underflow"<<endl;
            }
        }
        int peek(){
            if(top>=0){
                return arr[top];
            }
            else{
               cout<<"Stack is Empty"<<endl;
               return -1;
            }

        }
        bool isEmpty(){
            if(top==-1){
                return true;
            }
            else{
               return false;
            }
        }
        

};
int main()

{
    Stack s(5);
    s.push(93);
    s.push(18);
    s.push(17);
    s.push(7);
    s.push(12);
    cout<<"Top Element is "<<s.peek()<<endl;
    s.pop();
    cout<<"Top Element is "<<s.peek()<<endl;
    cout<<s.isEmpty();
    /*
    //stack creation 
    stack<int>s;
    //push
    s.push(2);
    s.push(3);
    //pop
    s.pop();
    cout<<"Printing top Element : "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not Empty"<<endl;
    }
    cout<<"Size of stack is "<<s.size()<<endl;
    */
    
 return 0;
}