//reverse of strings....
#include<iostream>
using namespace std;
void reverse(string& str,int i,int j){  //pass string by reference....
    //base case 
    if(i>j){
        return ;

    }

    swap(str[i],str[j]);
    i++;j--;
    reverse(str,i,j);
}
int main(){
    
    string str ="abcde";
    reverse(str,0,str.length()-1);
    cout<< str<< endl;
return 0;
}