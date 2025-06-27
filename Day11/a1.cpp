#include<iostream>

using namespace std;

bool duplicate(int arr[], int n){
    for ( int i = 0; i < n; i++){
    
        for ( int j = 0; j < n; j++){
            
            if ( i != j && arr[i] == arr[j]){
                return true;
             
            }
            
            
        }
    }
    return false;
}

int main(){


    int arr[10] = {1,1,1,3,3,4,3,2,4,2};
    int n = sizeof(arr)/ sizeof(int);


    cout<<duplicate(arr,n)<<endl;

    return 0;
}