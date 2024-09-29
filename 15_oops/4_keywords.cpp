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
    char level;                 //this data member are not access by static function 
    static int timeToComplete ;

    static int fun(){
        //static function access only static data member only 
        //this is not used there
        return timeToComplete;

    }
};

int Hero::timeToComplete = 5;  //static data member

int main(){
    cout <<  Hero::fun() << endl;

   cout << Hero::timeToComplete << endl;
   
   Hero a;
   cout << a.timeToComplete << endl;
   
   Hero b;
   b.timeToComplete = 10;
   cout << a.timeToComplete << endl;
   cout << b.timeToComplete << endl;
return 0;
}