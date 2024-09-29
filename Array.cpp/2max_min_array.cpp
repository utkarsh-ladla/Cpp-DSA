#include<iostream>
#include<climits>
using namespace std;

int get_max (int num[],int n){
    int  maxi = INT_MIN;

    for(int i=0; i<n; i++){
        
         maxi = max(maxi , num[i]);   // perdefined function for finding function 
       
        // if(num[i]>maxi){
        //     max = num[i];

        // } 

    }
    return maxi;
}

int get_min(int num[],int n){
    int  min = INT_MAX;

    for(int i=0; i<n; i++){
        if(num[i]<min){
            min = num[i];
        } 

    }
    return min;
}

int main(){
    int size;
    cin>>size;
    
    int num[100];

    for (int i=0; i<size; i++){
        cin >> num[i];

    }

    cout << "maximum value is :" << get_max(num,size) << endl;
    cout << "minmum value is :" << get_min(num,size) << endl;

return 0;
}                 