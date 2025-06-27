#include<iostream>

using namespace std;

int main(){
    //take the number 
    int num;
    cout<<"Enter the number: ";
    cin>>num;


    //add the loop
    for(int i=1; i<=10;i++){
        cout<<num<<"*"<<i<<" = "<<num*i<<endl;
    }

    return 0;
}