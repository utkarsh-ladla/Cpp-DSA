#include<iostream>
using namespace std;
void update(int arr[],int n){

    arr[0] = 120;
    cout << "Inside function" << endl;
    //printing array 
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "going back yto main function"<<endl;

}
int main(){
    
    int arr[3] = {1,2,3};

    update(arr,3);
    //printing the array...
    for(int i=0 ; i<3; i++ )
    {
        cout << arr[i] << " ";
        //update value is printed .......
    }
return 0;
}