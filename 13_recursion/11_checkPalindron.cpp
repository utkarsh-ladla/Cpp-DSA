//check palindeome
#include<iostream>
using namespace std;
bool checkPalindrome(string str,int i,int j){

    // base case 
    if(i>j){
        return true;

    }
    if(str[i] != str[j]){
        return false;

    }
    else {
        return checkPalindrome(str,i+1,j-1);
    }
}
int main(){
    
    string str = "book";
    cout << endl;

    bool isPalindrome = checkPalindrome(str,0,str.length()-1);

    if(isPalindrome){
        cout << "Its a palindrome" << endl;
    }
    else {
        cout << "Its not  a palindrome" << endl;
    }
return 0;
}