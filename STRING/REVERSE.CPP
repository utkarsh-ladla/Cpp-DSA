#include<iostream>
using namespace std;
int getLenght(char name[]){
    int count =0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

void Reverse(char name[], int n){
    int s=0;
    int e = n-1;


    while(s<e){
        swap(name[s++],name[e--]);
    }
}


int main(){
    
    char name[20];

    cout <<" Enter your name" << endl;
    cin >> name;

    cout << "your input name is " << name << endl;
    //cin stops when we gave ENTER, SPACE, TAB and new line......

    int len = getLenght(name) ;
    cout <<"lenght " << len << endl;
    Reverse(name, len);
    cout<< "reverse of string " << name << endl;

return 0;
}