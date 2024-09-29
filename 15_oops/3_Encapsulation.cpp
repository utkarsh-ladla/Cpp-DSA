#include<iostream>
using namespace std;

//Encapsulation 

//encapsulation is the bundling of data and the methods that operate on that data into a single unit.
// Encapsulation can be used to hide data members, data functions, and methods 

class student{
    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }
};

int main(){

    student first;

    cout <<"alright" << endl;  
return 0;
}