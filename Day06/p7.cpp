#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter then number of iterations n: ";
    cin>>n;
    int k = 1;
    for(int i = 0; i<= n; i++){
        for(int j = 0; j<= i; j++){
            cout<<k;
            k++;
        }
        cout<<"\n";
    }
   

    return 0;
}