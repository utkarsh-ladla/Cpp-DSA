#include<iostream>
using namespace std;
int main(){
    
    //pointer is created and pointing to garbage value "bad practice "
    // int *p = 0;

    // cout << *p << endl;
 
    /*int i = 5;

    int *q =&i;
    cout << *q << endl;
    cout << q << endl;

    int *p =0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;*/

    int num=5;
    int  *p = &num;
    int a =num;
    cout << " a before "<< num << endl;
    a++;
    cout << " a after "<< num << endl;

    cout << a << endl;
    cout << *p << endl;

//
    int *q = p;
    cout << p << "_ " << q << endl;
    cout << *p << " _" << *p << endl;

    //IMPORTANT CONCEPT....
    int i=3;
    int *t = &i;
    *t++;
    cout << ++(*t) << endl;
return 0;
}