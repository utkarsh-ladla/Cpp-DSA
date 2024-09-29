//missing and repeating number in an array
#include<iostream>
using namespace std;
int missingRep(int arr[],int n){
    int rep=-1,miss=-1;
    for(int i=1;i<n;i++){
        int count =0;
        for(int j=1;j<n-1;j++){
            if(arr[j]==i){
                count++;
            }
        }
        if(count == 2) 
            rep = i;
        else if(count == 1)
            miss = -1;

        // if(rep != -1 && miss != -1 )
        //     break;
    }
    cout << rep<<miss<<endl;
    return 0;
}
int main(){
    
    int arr[6]={1,2,2,3,4,6};
    missingRep(arr,6);
return 0;
}