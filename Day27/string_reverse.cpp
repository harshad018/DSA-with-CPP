#include <algorithm>
#include <cstring>
#include<iostream>
#include<string>
#include<stack>

using namespace std;

void reverseString(stack<char> &s, string str){

    for ( int i = 0; i < str.length(); i++){
        s.push(str[i]);
    }

    while(!s.empty()){
        cout<<s.top()<< " ";

        s.pop();
    }

    cout<<endl;

}

int main(){

    stack<char> s;
    string str = "abcd";
    reverseString(s,  str);









    return 0;
}
