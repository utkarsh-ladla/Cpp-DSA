#include<iostream>
using namespace std;

int main(){
    
    int a,b;

    cout  << "Enter a value of a" << endl;
    cin >> a;

    cout << "Enter a value of b"<< endl;
    cin  >> b;

    char  op;
    cout << "Enter the opertation you ant to perform"<< endl;
    cin >>op;

    switch (op)
    {
    case 'a';
        break;
    case '-';

    case '*';

    case '/';

    case '%';
    
    default:
        break;
    }
return 0;
}