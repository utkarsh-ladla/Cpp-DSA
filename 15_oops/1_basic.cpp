#include<iostream>
// #include "1_heroClass.cpp"
using namespace std;

class Hero{
  
    // properties
    private:
    int health;

    public:
    char level;
    
    void print(){
        cout << level << endl;
    }

    int getHealth(){
         return health;
    }

    char getLevel(){
         return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
    
};
int main(){
    //static allocation 
    Hero ramesh; //creating of object
    cout << "size " << sizeof(ramesh);

    ramesh.setHealth(70);
    cout <<"Ramesh health is " << ramesh.getHealth()<<endl;;
    // ramesh.health = 70; //seting value 
    ramesh.level ='A';

    cout << "health is : "<< ramesh.getHealth() << endl;
    cout << "level is: " << ramesh.level;


return 0;
}