//Merge sort in cpp
#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e - mid;

    int first[len1] = {};
    int second[len2] = {};

    //copy values 
    int mainindex = s;
    for(int i = 0;i<len1; i++){
        first[i] = arr[mainindex++];
    }

     mainindex =mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainindex++];
    }

    //merge 2 sorted arr
    int index1=0;
    int index2=0;
    mainindex = s;

    while(index1 <len1 && index2 <len2){
        if(first[index1] < second[index2]){
            arr[mainindex++] = first[index1++] ;
        }
        else{
            arr[mainindex++] = second[index2++] ;
        }
    }
    while(index1<len1){
        arr[mainindex++] = first[index1++] ;
    }
    while(index1<len1){
        arr[mainindex++] = first[index2++] ;
    }
}

void mergeSort(int arr[], int s, int e){

    // base case 
    if(s>=e){
        return ;
    }
    int mid = (s+e)/2;
    // left part sort
    mergeSort(arr, s, mid);

    //right part sort
    mergeSort(arr,mid+1, e);

    // merge 
    merge(arr,s,e);

}

int main(){
    //divide and conqueror approach

    int arr[5]={2,6,4,3,7};
    int n =5;

    mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
return 0;
}