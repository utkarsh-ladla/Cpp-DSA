#include<iostream>
#include<deque>
using namespace std;
int main(){
    
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout << i <<" ";
    }

    d.pop_back();
    cout << endl;

    for(int i:d){
        cout << i << " ";
    }
    
    // cout << "print first indx element "<<d.at(1);

    // cout <<"front " <<d.front()<<endl;
    // cout << "back "<<d.back()<<endl;

    cout << "size before erasing " << d.size();
    d.erase(d.begin(),d.begin()+1);
    cout << "size after erasing " <<  d.size();

return 0;
}