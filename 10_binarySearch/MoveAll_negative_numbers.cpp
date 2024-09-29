#include <iostream>
using namespace std;

//Move all the negative elements to one side of the array 
//Move all negative numbers to beginning and positive to end with constant extra space

void reArrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        { // array i is less then 0
            if (i != 0)
            {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int arr[] = {1, 2, -4, -5, 2, -7, 3, 2, -6, -8, -9, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    reArrange(arr, n);
    printArray(arr, n);
    return 0;
}