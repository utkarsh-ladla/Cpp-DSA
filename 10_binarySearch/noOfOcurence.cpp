#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    // 1 2 .3. 3 3 3 5 5
    // searching through binary search...

    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    // total number of occurrences in sorted array

    int arr[8] = {1, 2, 3, 3, 3, 3, 5, 5};
    int key = 3;

    int firstOccIndex = firstOcc(arr, 8, key);
    int lastOccIndex = lastOcc(arr, 8, key);

    int sum = ((lastOccIndex - firstOccIndex) + 1);
    cout << "total number of occurrences in sorted array " << sum;
    
    return 0;
}