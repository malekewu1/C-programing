#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{    int sz = 5;
    int arr[sz];
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i] ;
    }
   
    reverseArray(arr, sz);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
}
