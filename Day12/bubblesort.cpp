#include<iostream>

using namespace std;

void printArray( int arr[], int n){
    for ( int i = 0; i < n; i++){
        cout<<arr[i]<<",";
    }

    cout<<endl;
}

void bubbleSort( int arr[], int n){
    bool isSwap = false;
    for ( int i = 0; i < n-1; i++){
        for ( int j = 0; j < n-1-i ; j++){
            if ( arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    if ( !isSwap){//optimization for already sorted arrays.
        return;
    }

    printArray(arr, n);
}

int main(){


    int arr[5] = {5,4,3,2,1};

    int n = 5;

    bubbleSort(arr, n);





    return 0;
}