#include<iostream>
using namespace std;
//finding pivot element .....
//WHICH IS SMLLEST IN WHOLE ARAYS...    

int getPivot(int arr[], int n) {

    int s=0;
    int e= n-1;
    int  mid = s +(e-s)/2;

    while(e<s) {

        if(arr[mid] >= arr[0]){
            s=mid;
        }
        else{
            e=mid;
        }
        mid= s+(e-s)/2;
    }

}
int main(){
    
    int arr[5] = {8, 10, 17, 1, 3};

    cout << "pivot is " << getPivot(arr,5) << endl;
return 0;
}