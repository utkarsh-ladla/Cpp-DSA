/*
1
23
456
78910
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i=1;
    int count=1;

    while(i<=n){
        int j=1;
        while (j<=i){
            cout << count;
            j=j+1;
            count =count + 1;
        }
        i=i+1;
        cout << endl;
    }
return 0;
}