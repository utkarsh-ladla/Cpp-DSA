#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[6] = {22,44,55,66,33,11};
    priority_queue<int> ans;
    for(int i=0;i<6;i++)
    {
        ans.push(arr[i]);
    }
    for(int i=0;i<4;i++){
        cout << ans.top()<< endl;
        ans.pop();
    }
return 0;
}