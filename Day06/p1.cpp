#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter then number of iterations n: ";
    cin>>n;

    for(int i = 0; i<= n; i++){
        for(int j = n; j>= i; j--){
            cout<<"*";
        }
        cout<<"\n";
    }
   

    return 0;
}