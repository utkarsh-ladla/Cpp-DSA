#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;

    }
    int setWeight(int w){
        this->weight = w;
    }
    
};

class male:public Human{
    public:
    string color;

    void sleep(){
        cout <<"male sleeping " << endl;
    }
};
int main(){
    
    male obj1;
    cout << "Age "<<  obj1.age << endl;  //it is not exist in male but in human so it is access by male
    cout << "weight " << obj1.weight << endl;
    cout << "height " << obj1.height << endl;

    cout << "color" << obj1.color << endl;
    obj1.setWeight(85);
    cout << "weight " << obj1.weight << endl;
    obj1.sleep();
 return 0;
}