#include<iostream>
#include<queue>

using namespace std;






int main(){

 
    priority_queue<int> pq;

    //priority_queue<int,vector<int>, greater<int>> pq for min heap

    
    pq.push(5);
    pq.push(10);
    pq.push(3);

    while(!pq.empty()){
        
        cout<<"top: "<<pq.top()<<endl;

        pq.pop();
    }
    

    return 0;
}
