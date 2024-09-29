#include<iostream>
using namespace std;
#include<map>
int main(){
    //key and value storing like, key -> value 
    //one key pointing to only one value
    map<int,string> m;

    m[1]='Utkarsh';
    m[2]='ladla';
    m[3]='hii';

    m.insert({4,"hello"});
    for(auto i : m){
        cout << i.first << endl;
    }
    //sorted in map condition .....
    //unoreded is in random...

return 0;
}