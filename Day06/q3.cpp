#include<iostream>

using namespace std;

int main(){
  int n;

  cout<<"Enter the number of iterations n: ";
  cin>>n;

  for(int i = 1; i<= n; i++){
    for (int j = n; j>= 1; j--){
       if(j>i){
        cout<<" ";
       }else{
        cout<<j;
       }
    }

    for ( int k = 1; k<=i;k++){
        if( k != 1){
            cout<<k;
        }


    }
    cout<<"\n";
  }

    return 0;
}