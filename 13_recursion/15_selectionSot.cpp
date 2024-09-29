// selection sort using recursion....
#include <iostream>
using namespace std;

void selectionSort(int *arr, int n)
{

    // base case
    if (n == 0 || n == 1)
    {
        return;
    }

    // one round
    //  for(int i=0;i<n-1;i++){
    //      int min_ind = i;

    //     for(int j=i+1;j<n-1;j++){
    //         if(arr[j] < arr[i] ){
    //             min_ind= j;
    //         }
    //     }
    //     if(min_ind != i){
    //         swap(arr[min_ind],arr[i]);
    //     }
    // }

    int min_ind = 0; // Initialize min_ind outside the loop
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[min_ind])
        { // Use min_ind instead of i
            min_ind = i;
        }
    }
    if (min_ind != 0)
    {                               // Check if min_ind is not the same as current index
        swap(arr[min_ind], arr[0]); // Swap with the first element
    }
    selectionSort(arr + 1, n - 1);
}
int main()
{
    int arr[6] = {5, 4, 2, 7, 8, 9};

    selectionSort(arr, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}