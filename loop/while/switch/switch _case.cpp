#include<iostream>
using namespace std;
int main(){
    int num =1;
    char ch ='a';

    cout << endl;

    switch (num)
    {
    case 1: cout << "firt"<< endl; 
        break;
    
    case 2: cout << " scond" << endl;
    break;

    case '1': cout << "a"<< endl;
    default: cout << "It is dfault"<< endl;
        break;
    }


return 0;
}