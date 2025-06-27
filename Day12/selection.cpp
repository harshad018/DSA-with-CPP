#include<iostream>

using namespace std;


void printArray( int arr[], int n){
    for ( int i = 0; i < n; i++){
        cout<<arr[i]<<",";
    }

    cout<<endl;
}

void selectionSort( int arr[], int n){
    
    for ( int i = 0 ; i < n -1; i++){
        int minIndex = i;
        for ( int j = i +1; j < n; j++){
            if ( arr[j] < arr[minIndex]){
                minIndex = j;
            }

            
        }
        swap( arr[i], arr[minIndex]);
    }

    printArray(arr,n);
}


int main(){


    int arr[5] = {5,4,1,3,2};

    int n = 5;


    selectionSort(arr, n);



    return 0;
}