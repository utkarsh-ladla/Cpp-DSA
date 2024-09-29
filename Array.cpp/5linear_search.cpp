#include<iostream>
using namespace std;
bool Linear_search(int arr[], int size,int key){

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
        return 0;

}

int main(){
    
    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};

    cout << "Enter key for searching "<<endl;
    int key;
    cin >> key;

    bool found = Linear_search(arr, 10 ,key);

    if(found){
        cout << "key is founded";

    }
    else{
        cout << "key is not present here";
    }

return 0;
}