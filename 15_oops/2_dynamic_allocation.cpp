#include<iostream>
#include<cstring>
// #include "1_heroClass.cpp"
using namespace std;

class Hero{
  
    // properties
    private:
    int health;

    public:
    char *name;
    char level;

    //non-parameterized constructor.......
    Hero(){
        cout << "constructor called " << endl;
        name = new char[100];
    }

    //paramrterized constructor...

    Hero(int health){
        this->health = health;
    }

    Hero(int health,char level){
        this -> level = level;
        this -> health = health;
    }


    //copy constructor....
    
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name) +1];
        strcpy(ch , temp.name);
        this->name = ch;


        cout << "copy constructor called"<<endl;
        this->level = level;
        this->health = health; //this is a pointer ponting current object like ramesh 
    }

    void print(){
        cout << endl;
        cout << "name: " << this->name << endl;
        cout <<  "health:" << this->health << endl;
         cout << "level"<< this->level << endl;
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

    void setName(char name[]){
    //    this->name = name;
     strcpy(this->name,name);
    }
    
    ~Hero(){
        cout << "Destructor is called" << endl;   //destructor 
    }
};
int main(){
    // Hero ramesh(10); //called default constructor 

    Hero hero1;
    // Hero hero2;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);
    hero1.print();

    // cout << "Address of ramesh " << &ramesh << endl;
    //dynamically 
    Hero *h =new Hero();


    // ramesh.getHealth();

    Hero temp(22,'B');

    //copy Constructor
    Hero hero2(hero1);
    hero2.print();

    delete h;   //manually called destructor....

    // Hero hero2 = hero1;


    // a.setHealth(70);
    // a.setLevel('A');
    // cout << "level is : "<< a.level << endl;
    // cout << " health is : " << a.getHealth()<< endl;
    // cout << endl;

    //dynamic allocation 
    // Hero *b =new Hero;
    // b->setHealth(80);
    // b->setLevel('B');

    // cout << "Level is " << (*b).level << endl;
    // cout << "health is "<< (*b).getHealth()<< endl;
    
    // cout << "Level is " << b->level << endl;
    // cout << "health is "<< b->getHealth()<< endl;
return 0;
}