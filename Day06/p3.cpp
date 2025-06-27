#include<iostream>

using namespace std;

int main(){
  int n;

  cout<<"Enter the number of iterations n: ";
  cin>>n;
    int k = 65;
  for(int i = 65; i<= 65+n; i++){
    for (int j = 65; j<= i; j++){
        cout<<(char)k;
        k++;
    }
    cout<<"\n";
  }

    return 0;
}