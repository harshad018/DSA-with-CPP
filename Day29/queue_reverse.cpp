#include<iostream>
#include<queue>
#include<stack>
using namespace std;


void queueReverse(queue<int> &org){

    stack<int> s;

    while(!org.empty()){
        s.push(org.front());
        org.pop();
    }

    while(!s.empty()){
        org.push(s.top());
        s.pop();
    }

    while(!org.empty()){
        cout<<org.front()<<" ";
        org.pop();
        cout<<endl;
    }
}
int main(){

    queue<int> org;

    org.push(1);
    org.push(2);
    org.push(3);
    org.push(4);
    org.push(5);

    queueReverse(org);





    return 0;
}
