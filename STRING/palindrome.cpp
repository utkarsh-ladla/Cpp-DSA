#include<iostream>
using namespace std;

char toLowercase(char ch){
    if(ch>='a' && ch <='z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    } 

}

int palindrome(char arr[],int len){
    int s=0;
    int e=len-1;

    while(s<=e){
        if(toLowercase(arr[s])!=toLowercase(arr[e])){
            return 0;
        }

        else{
            s++;e--;
        }

    }
    return 1;
}

int getLenght(char name[]){
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

    int len = getLenght(name) ;
    cout <<"lenght " << len << endl;
    // Reverse(name, len);
    cout<< "reverse of string " << name << endl;

    cout << "palindrome or not" << palindrome(name, len)<< endl;

    cout << "upper case to lower case " << toLowercase('A');
return 0;
}