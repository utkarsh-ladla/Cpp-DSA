#include<iostream>
#include<stack>
using namespace std;
int main(){
    
    string str = "utkarsh";
    stack<char> s;

    for(int i=0;i<str.length();i++){
        s.push(str[i]);
    }

    string ans = "";

    while(!s.empty()){
        char temp = s.top();
        ans.push_back(temp);
        s.pop();
    } 
    
    cout << "answer " << ans << endl;
return 0;
}