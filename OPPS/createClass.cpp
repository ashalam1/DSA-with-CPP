#include<iostream>
using namespace std;
class Hero{
    public:
     int health;
     char level;
};
int main()
{
    //create object
    Hero H1;
    H1.health=70;
    H1.level='A';
    cout<<"Health is "<<H1.health<<endl;
    cout<<"Level is "<<H1.level<<endl;
 return 0;
}