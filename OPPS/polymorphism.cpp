//function Overloading
#include<iostream>
using namespace std;
class A{
    public:
    void sayHello(){
        cout<<"Hello Ashfu"<<endl;
    }
    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }

};
int main()
{
    A obj;
    string name="samyak";
    obj.sayHello();
 return 0;
}