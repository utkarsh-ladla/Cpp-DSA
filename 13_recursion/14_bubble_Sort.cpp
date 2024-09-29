//bubble sort 

#include<iostream>
using namespace std;

void sortArr(int arr[], int n){

    // base case -> only one element present in arr...
    if(n==0 || n ==1){
        return ;
    }

    //one case solve 
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    sortArr(arr,n-1);

}
int main(){
    
    int arr[6]={1,3,5,4,6};

    sortArr(arr,5);

    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
return 0;
}