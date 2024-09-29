#include<iostream>
using namespace std;

void rev(int a[],int n){
    //function used for reverse an array

    int start = 0;
    int end = n-1;

    while(start <= end){
        
        swap(a[start], a[end]);
        start++;
        end--;
    }

}

void printArray(int a[],int n){

    //function used for printing the array

    for(int i=0; i<n; i++){
        cout << a[i];
    }
    cout <<endl;
}
int main(){

int a[6] = {1,2,3,4,5,6};
int b[5] = {5,4,3,2,1};

rev(a,6);
rev(b,5);

printArray(a,6);
printArray(b,5);

return 0;
}