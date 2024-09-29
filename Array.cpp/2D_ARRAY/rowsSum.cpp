#include<iostream>
using namespace std;


//to print row wise sum......
void printSum(int arr[][4], int row, int col){
    for (int i = 0; i < 3; i++)
    {
        int sum=0;
        for (int j = 0; j < 4; j++)
        {
           sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;

}
int main(){
    
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

      // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    printSum(arr,3,4);
return 0;
}