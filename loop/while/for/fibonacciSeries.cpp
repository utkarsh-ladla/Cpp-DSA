#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number for series "<< endl;
    cin >> n ;

    int a=0;
    int b=1;
      cout << a << " " << b << " ";
    for (int i=1 ; i <= n; i++){
      
        int sumNumber=a+b;
        cout << sumNumber << " ";

        a = b;
        b = sumNumber;


    }

return 0;
}