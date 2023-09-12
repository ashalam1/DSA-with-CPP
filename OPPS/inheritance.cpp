#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;
    public:
    int getAge(){
        return this->age;
    }
    void setweight(int w){
        this->weight=w;

    }
};
class male : public Human {
    public:
    string color;
    void sleep(){
        cout<<"male sleeping"<<endl;
    }
};
int main()
{
    male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    cout<<object1.color<<endl;
 return 0;
}