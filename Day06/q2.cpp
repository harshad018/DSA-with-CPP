#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter then number of iterations n: ";
    cin>>n;

    for(int i = 1; i<= n; i++){
        for(int j = 1; j<= n-i+1; j++){
            cout<<" ";

           
        }

        for(int k = 1; k<=n; k++){
            cout<<"*";
        }

        for( int l = 1; l<= i-1;l++){
            cout<<" ";
        }
        cout<<"\n";
    }
   

    return 0;
}