#include<iostream>
using namespace std;

bool isPrime(int n){

    if(n<=1)
    return false; 

    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
        
    }
    return true;
}

int main(){
    
    int n;
    cout << "Enter a number for checking " << endl;
    cin >> n;

    if(isPrime(n)){
        cout << "It is a prime Number " << endl;
    }
    else{
        cout << "It is not a prime number " << endl;
    }
return 0;
}