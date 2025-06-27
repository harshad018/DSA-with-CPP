#include<iostream>

using namespace std;

int main(){
  int n;

  cout<<"Enter the number of iterations n: ";
  cin>>n;
  
  int k = (n+1)/2;

  for(int i = 1; i<= k; i++){
    for ( int j = 1; j<= k-i; j++){
      
     
        cout<<" ";
     

      

    }

    for(int l = 1; l<=(2*i-1); l++){

        cout<<"*";
    }
    
    
    cout<<"\n";
  }

  
    for(int i = 1; i<= k; i++){

    for(int l = 1; l<=i; l++){

        cout<<" ";
    }
    for ( int j = 1; j<= n-(2*i); j++){
      
     
        cout<<"*";
     

      

    }

    
    
    
    cout<<"\n";
  }
    return 0;
}