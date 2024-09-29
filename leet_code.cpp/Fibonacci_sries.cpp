// WAP for fibonacci seris

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number for fibonacci sries" << endl;
    cin >> n;

    int a=0;
    int b=1;
    int i=1;
    cout << a <<" "<< b << " "; 
    while(i<=n){
        int sum = a+b;
        cout << sum <<" ";
        a = b;
        b = sum;
        i++;
    }
    return 0;
}
// if the input is exceded by rang then print 0