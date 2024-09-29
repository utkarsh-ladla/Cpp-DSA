/*
   *
  **
 ***
****
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i=1;
    
    //space printing in pattern...
    while (i<=n){
        int space = n - i;
        while (space){
            cout << " ";
            space--;
        }

    //star printing in pattern.....
        int j=1;
        while(j<=i){
            cout << "*";
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
return 0;
}