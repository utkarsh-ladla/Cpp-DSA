#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int sum = 0;
    int i = 1;

    while(i <= n){
        //cout << i << " ";
        i=i+1;
        sum = sum + i;
    } 
    cout << "value of sum is " <<sum << endl;
return 0;
}