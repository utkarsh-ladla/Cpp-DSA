#include<iostream>
using namespace std;

int Sum(int arr[], int n){

     int sum = 0;
    //function for sum of array
    for (int i=0; i<n ;i++){
        int a = arr[i];
       
        sum = sum + a;
    }
    return sum;
}
int main(){
    
//printing sum of array....
    int arr[4]={1,2,3,4};

    cout <<" Sum of array is "<< Sum(arr,4) <<endl;
return 0;
}