#include<iostream>
using namespace std;
int main(){
    
    int amount;
    cout << "enter amount for case distribution " << endl;
    cin >> amount;

    int rs100, rs50, rs20, rs1;

    switch (1)
    {
    case 1: rs100 = amount/100;
        amount = amount%100;
        cout << "No of 100  rupees note required are = " << rs100 << endl;
   
    case 2: rs50 = amount/50;

        amount = amount%100;
        cout << "No of 50  rupees note required are = " << rs50 << endl;
    
    case 3: rs20 = amount/20;
        amount = amount%20;
        cout << "No of 20  rupees note required are = " << rs20 << endl;

    case 4: rs1 = amount/1;
        amount = amount%1;
        cout << "No of 1  rupees note required are = " << rs1 << endl;
     
    default: cout << "NOT DISTRIBUTES PROPERLY"<< endl;
        break;
    } 

return 0;
}