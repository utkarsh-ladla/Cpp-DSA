#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> a;

    vector<int> a(5,1);

    vector<int>last(a);
    cout << "print last" <<endl;
    for(int i:last){
        cout << i <<" ";
    }cout << endl;

    cout << "capacity" << a.capacity()<<endl;

    a.push_back(1);
    cout << "capacity"<< a.capacity() << endl;

    a.push_back(2);
    cout << "capacity"<< a.capacity() << endl;

    a.push_back(3);
    cout << "capacity"<< a.capacity() << endl;

    cout << "size->"<< a.size()<<endl;

    cout << "front element " << a.front() << endl;
    cout << "last element " << a.back() << endl;

    a.pop_back();

    cout << "after pop" << endl;
    for(int i:a){
        cout << i<<" ";
    }


    cout << "before clear size " << a.size() <<endl;
    a.clear();

    cout << " after clear size" << a.size();
return 0;
}