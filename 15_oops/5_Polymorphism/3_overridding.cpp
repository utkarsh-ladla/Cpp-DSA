#include<iostream>
using namespace std;

//method overriding 
class Animal{
    public:
    void speak(){               // smae name and parameter                            
        cout << "speaking " << endl;
    }
};

class Dog : public Animal{
    public:
    void speak(){                // same name and parameter
        cout << "barking " <<endl;
    }
};

int main(){

    Dog german;
    german.speak();   // dog class function....
    
return 0;
}