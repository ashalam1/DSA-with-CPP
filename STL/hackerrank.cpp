#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int>v;
    int N;
    cin>>N;
    for(int i=0; i<N; i++){
        int value;
        cin>>value;
        v.push_back(value);
    }
    v.erase(v.begin()+1);
    v.erase(v.begin()+1,v.begin()+3);
    for(int i=0; i<v.size(); ++i){
        cout<<v[i]<<" ";
    }
    return 0;
}
