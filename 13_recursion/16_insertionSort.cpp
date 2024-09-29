//insertion sorting 
#include<iostream>
using namespace std;

void insert(int arr[],int n){
    //base case
    if(n<=1){
        return ;
    }
    insert(arr,n-1);

    int last = arr[n-1];
    int j=n-2;

    while(j >= 0 && arr[j] > last){
         arr[j+1] = arr[j];
         j--;
    }
    arr[j+1] = last;
}
int main(){
    
    int arr[6]={4,3,2,6,7,1};
    insert(arr,6);

        for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
return 0;
}