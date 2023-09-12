#include<iostream>
using namespace std;
class Hero{
    private:
    int health;
    public:
     char level;
     int gethealth(){
        return health;
     }
     void sethealth(int h){
        health=h;
     }
};
int main()
{
    //create object
    Hero H1;
     H1.sethealth(70);
    cout<<"H1 Health is "<<H1.gethealth()<<endl;
 return 0;
}