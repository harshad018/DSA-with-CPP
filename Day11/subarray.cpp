#include<iostream>

using namespace std;

void printSubarray(int arr[], int n){
    int sub[5];
    for ( int start = 0; start < n; start++){
         for ( int end = start; end < n; end++){
            for ( int j = start; j <= end; j++){
              
                cout<<arr[j];
                
            }
            cout<<", ";
            
         }
         cout<<endl;
    }
}

int main(){

    int arr[5] = {1,2,3,4,5};

    int n = 5;

    printSubarray(arr, n);





    return 0;
}