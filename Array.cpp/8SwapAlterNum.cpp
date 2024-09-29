#include<iostream>
using namespace std;
void AlterRev(int arr[],int n){

    for(int i=0; i<n; i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
          
        }
    }
    // int start=0;
    // int next=1;
    // while(next < n){
    //     swap(arr[start],arr[next]); 
    //     start+=2;
    //     next+=2;

    }


void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
}
int main(){
    
    // int arr[6]={1,2,3,4,5,6};
    int n;
    cin >> n;
    int arr[6];
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }

    AlterRev(arr,6);
    print(arr,6);
return 0;
}