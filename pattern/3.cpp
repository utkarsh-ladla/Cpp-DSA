/*
12345
12345
12345
12345
*/
#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin >>n;
    int i=1;
    while(i<=n){
        int j=1;
        while (j<=n){
            cout << j;//we can use n-j+1 for reverse counting 
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
return 0;
}