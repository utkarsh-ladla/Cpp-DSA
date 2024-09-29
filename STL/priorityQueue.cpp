#include<iostream>
#include<queue>

using namespace std;
int main(){
    //maxHeap
    priority_queue<int> maxi;

    //minHeap
    priority_queue<int ,vector<int>,greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(8);

    cout << "size of maxi ->" << maxi.size() << endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout << maxi.top()<<" " ;
        maxi.pop();
    }
    cout << endl;
    mini.push(4);
    mini.push(5);
    mini.push(1);
    mini.push(3);

    cout << "size of maxi ->" << mini.size() <<endl;
    int m=mini.size();
    for(int i=0;i<m;i++){
        cout << mini.top()<<" " ;
        mini.pop();
    }
        cout << endl;




return 0;
}