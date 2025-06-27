#include<iostream>

using namespace std;

int main(){
  int n;

  cout<<"Enter the number of iterations n: ";
  cin>>n;
  int j  = 1;

  for(int i = 1; i<= n; i++){
    for ( j = 1; j<= n; j++){
      
      if( j> n-i){
        cout<<"*";
      }else{
        cout<<" ";
      }

      

    }
    
    cout<<"\n";
  }

    return 0;
}