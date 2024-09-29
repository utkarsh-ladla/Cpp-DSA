#include <iostream>
using namespace std;


int rowWithMax1s(int Arr[n][m],int n, int m){

    //brute force method for this 
    int ind = -1;
    int max_count = -1;
    for(int i=0; i<n-1; i++){
        int countRow = 0;
        for(int j=0;j <m-1;j++){
            countRow += Arr[i][j];
        }
        if(countRow > max_count){
            max_count = countRow;
            ind = i;
        }
    }
    return ind;

}
int main()
{

    // Given a boolean 2D array of n x m dimensions, consisting of only 1's and 0's,
    //  where each row is sorted. Find the 0-based index of the first row that has the
    //   maximum number of 1's.

    int n = 4;
    int m = 4;
    int Arr[n][m] = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };

    rowWithMax1s(Arr,n,m);

    
    return 0;
}