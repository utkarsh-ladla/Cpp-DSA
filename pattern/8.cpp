/*
1
23
345
4567

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i=1;
    
    while (i<=n){
        int j=1;
        int value =i;//by taking a variable for printing pattern....
        while (j<=i){
            cout << value ;
            j=j+1;
            value = value  + 1;
        }
        i=i+1;
        cout<< endl;
    }
return 0;
}*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i=1;
    while (i<=n){
        int j=1;
        while (j<=i){
            cout << (i+j)-1;
            j=j+1;
        }
        i=i+1;
        cout << endl;
    }
return 0;
}   