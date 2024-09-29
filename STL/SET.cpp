#include <iostream>
#include <set>
using namespace std;
int main()
{
    // every element is unique
    // sorted order in return
    // unoreded set and ordered set

    set<int> s;
    s.insert(5);
    s.insert(5); // only one time print ....
    s.insert(5);
    s.insert(2);
    s.insert(3);
    s.insert(8);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << s.count(-5) << endl; // checking present or not

    set<int>::iterator itr = s.find(5);

    for (auto it = itr; it != s.end(); it++)
    {
        cout << "value at itr" << *it << endl;
    }
    return 0;
}