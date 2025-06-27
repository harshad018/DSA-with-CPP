#include<iostream>

using namespace std;

int main(){
  int n;

  cout<<"Enter the number of iterations n: ";
  cin>>n;

  for(int i = 1; i<= n; i++){
    for (int j = 1; j<= i; j++){
        cout<<"*";
    }


    for( int k = 0; k< (2*n)- (2*i);k++){
        cout<<" ";
    }

    for (int j = 1; j<= i; j++){
        cout<<"*";
    }
    cout<<"\n";



  }

  
    for(int i = 1; i<= n; i++){
    for (int j = 1; j<= n-i+1; j++){
        cout<<"*";
    }


    for( int k = 0; k< (2*i)-2;k++){
        cout<<" ";
    }

    for (int j = 1; j<= n-i+1; j++){
        cout<<"*";
    }
    cout<<"\n";



  }



    return 0;
}