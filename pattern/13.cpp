/*
ABC
BCD
CDE
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i=1;
    char ch =  'A';
    while(i<=n){
        int j=1;
        while (j<=n){
            ch ='A'+i+j-2;//FORMULA FOR THIS PATTERN....
            cout << ch;
            
            j=j+1;

        }
        cout << endl;
        i=i+1;
    }
return 0;
}