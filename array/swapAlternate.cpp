#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int start = 0;
    int end = 1;
    while (start <= n - 2 && end < n - 1)
    {
        swap(arr[start], arr[end]);
        start = start + 2;
        end = end + 2;
    }
}
int main()
{
    int n;
    cout << "enter the number elements:";
    cin >> n;
    int arr[1000];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    reverse(arr,n);
   for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}