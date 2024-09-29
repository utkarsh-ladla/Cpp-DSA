
#include <iostream>
using namespace std;

bool linearSearch(int arr[],int n,int key){
    int start = 0;
    for(int i=0; i<=n; i++){
        if(key==arr[i]){
            return 1;
        }
    }
    return 0;
    
}
int main() {
    int n,key;
    cout << "Enter size of array" << endl;
    int arr[n];

    for(int i=0;i<=n;i++){
        cin >> arr[i];
    }
    // int arr[n]={1,2,3,4,5};
    
    cin >> key;
    // linearSearch(arr,n,key);
    
   int index = linearSearch(arr,n,key);
    if(index==1){
        cout << "key is found";
        
    }
    else{
        cout << "key is not found";
    }
    return 0;
}