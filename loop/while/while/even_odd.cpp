#include<iostream>
using namespace std;
int main(){
    int n,i=0;
    cout << "Enter no. or checking no is even or odd" ;
    cin >> n;//taking number from user.

    while(i <n){
        if(n%2==0){
            cout << n << " is even number " << endl;
            break;
        }
        else {
            cout << n <<  " this is not even number " << endl;
            break;
        }
    }


return 0;
}