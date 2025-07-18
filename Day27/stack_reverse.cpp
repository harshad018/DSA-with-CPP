#include <algorithm>
#include<iostream>
#include<stack>

using namespace std;

void pushAtBottom(stack<int> &s, int value){

    if ( s.empty()){
        s.push(value);
        return;
    }

    int temp = s.top();
    s.pop();

    pushAtBottom(s, value);

    s.push(temp);



}

void reverseStack(stack<int> &s){


    if ( s.empty()){
        return;
    }


    int temp = s.top();

    s.pop();

    reverseStack(s);

    pushAtBottom(s, temp);
}

int main(){

    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    reverseStack(s);

    while(!s.empty()){
        cout<<s.top()<< " ";

        s.pop();
    }







    return 0;
}
