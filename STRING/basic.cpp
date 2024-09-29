#include<iostream>
using namespace std;
int getLenght (char name[]){
    int count =0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    
    char name[20];

    cout <<" Enter your name" << endl;
    cin >> name;

    cout << "your input name is " << name << endl;
    //cin stops when we gave ENTER, SPACE, TAB and new line......


    cout <<"lenght " << getLenght(name) << endl;



return 0;
}