#include<iostream>
using namespace std;
int main(){
    char ch='1';
    int num=2;

    cout << endl;

    switch (ch)
    {
    case 1: cout << "first" <<endl;
        break;
    
    case '1':
        switch (num)
        {
        case 1: cout << "value of num is "<< endl;
        break;
    
    default:
        break;
    }
        break;
        
    default: cout << "it is default" << endl;
        break;
    }
return 0;
}