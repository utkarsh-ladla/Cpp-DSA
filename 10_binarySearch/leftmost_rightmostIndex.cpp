#include<iostream>
using namespace std;

int firstocc(int even[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans = -1;

    while(start <= end){
        if(even[mid] == key){
            ans = mid;
            end = mid-1;
        }
        else if(key < even[mid]){
            end = mid-1;
        }
        else if(key > even[mid]){
            start = mid + 1;
        }
        mid =start + (end - start)/2;
    }
    return ans;
}

int lastocc(int even[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans = -1;

    while(start <= end){
        if(even[mid] == key){
            ans = mid;
            start = mid+1;
        }
        else if(key < even[mid]){
            end = mid-1;
        }
        else if(key > even[mid]){
            start = mid + 1;
        }
        mid =start + (end - start)/2;
    }
    return ans;


}

int main(){
    
    int even[8]={0,0,1,1,1,2,2,4};

    cout << "First index of 1 is " << firstocc(even,8,1) << endl;
    cout << "Last index of 1 is " <<  lastocc(even,8,1) << endl;

return 0;
}