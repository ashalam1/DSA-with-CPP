#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int, string>m;

    m[1]="love";
    m[2]="ashfu";
    m[13]="alam";

    m.insert({5,"babbar"});

cout<<"before erase"<<endl;
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

cout<<"finding -13-->"<<m.count(-13)<<endl;

//m.erase(5);
cout<<"after erase"<<endl;
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}cout<<endl<<endl;

auto it=m.find(5);
for(auto i=it; i!=m.end();i++){
    cout<<(*i).first<<endl;
}
 return 0;
}