#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << "Capacity-->" << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity-->" << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity-->" << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity-->" << v.capacity() << endl;
    cout << "size-->" << v.size() << endl;
    vector<int > a(5,1);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    vector<int> m(a);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    cout << "Element at 2nd Index-->" << v.at(2) << endl;
    cout << "Empty or not-->" << v.empty() << endl;
    cout << "First Element-->" << v.front() << endl;
    cout << "Last Element-->" << v.back() << endl;

    cout << "Before pop back" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After pop back" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Before clearing the size: " << v.size() << endl;

    v.clear();

        cout<< "After clearing the size: " << v.size() << endl;
        cout << "Capacity-->" << v.capacity() << endl;

    return 0;
}