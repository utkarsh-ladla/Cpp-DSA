#include<iostream>
using namespace std;
int main(){
    
    int a,b;
    a=4;
    b=6;

    cout << "a&b " << (a&b) << endl;    //a=4(100) & b(110) ,(a&b) =4(100) by bitwise comparison
    cout << "a|b " << (a|b) << endl;
    cout << "~a " << (~a )<< endl;
    cout << "a^b " << (a^b) << endl;
    
    cout << (17>>1) << endl;
       cout << (17>>2) << endl;
          cout << (19<<1) << endl;
             cout << (21<<2) << endl;


return 0;
}