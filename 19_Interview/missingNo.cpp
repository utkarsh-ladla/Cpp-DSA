// Online C++ compiler to run C++ program online
//Find the Missing Number
// Last Updated : 05 Jul, 2024
// Given an array arr[] of size N-1 with integers in the range of [1, N], the task is to find the missing number from the first N integers.

// Note: There are no duplicates in the list.
#include <iostream>
using namespace std;

int main() {
    int n=5;
    int arr[5]={1,2,3,5};
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        
    }
    int expSum = (n*(n+1)/2);
    cout << expSum - sum << endl;

    return 0;
}