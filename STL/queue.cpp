#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string>q;

    q.push("love");
    q.push("ashfu");
    q.push("alam");
    
    cout<<"First element -->"<<q.front()<<endl;
    q.pop();
    cout<<"First element -->"<<q.front()<<endl;
    cout<<"size after pop "<<q.size()<<endl;
 return 0;
}