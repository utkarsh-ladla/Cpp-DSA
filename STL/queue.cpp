#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<string> q;

    q.push("Utkarsh");
    q.push("ladla");

    cout << "First Element ->" << q.front()<<endl;
    q.pop();
    cout << "First Element ->" << q.back()<<endl;

    cout <<"Size after pop ->" << q.size()<<endl;

    
return 0;
}