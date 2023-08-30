#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // go to right part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        // go to left part
        else // key<mid
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}



int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[59] = {1, 2, 3, 4, 5, 6, 8, 9 ,10, 14, 16, 19, 22, 23, 25, 26, 27, 29, 31, 34, 35, 36, 38, 39, 40, 45, 46, 48, 50, 51, 52, 57, 59, 60, 61, 63, 67, 68, 69, 71, 75, 76, 77, 79, 81, 82, 83, 86, 87, 88, 90, 92, 93, 94, 95, 96, 98, 99, 100};
    int evenIndex = binarysearch(even, 6, 22);
    int oddIndex=binarysearch(odd, 59, 93);
   if(evenIndex!=-1){
    cout<<"Element found at index "<<evenIndex<<endl;
   }
   else{
      cout<<"Element not found"<<endl;
   }

   if(oddIndex!=-1){
    cout<<"Element found at index "<<oddIndex<<endl;
   }
   else{
      cout<<"Element not found"<<endl;
   }
    return 0;
}