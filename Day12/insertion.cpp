#include<iostream>

using namespace std;

void printArray( int arr[], int n){
    for ( int i = 0; i < n; i++){
        cout<<arr[i]<<",";
    }

    cout<<endl;
}

void insertionSort(int arr[], int n){
    for ( int i = 1 ; i < n; i++){
        int current = i;
        int previous = i-1;
        while ( previous >= 0 && arr[previous] > current){

            swap ( arr[previous], arr[previous + 1]);
            previous--;
        }

        arr[previous + 1] = current;
    }

    printArray(arr,n);
}

int main(){

    int arr[5] = {5,4,1,3,2};
    int n = 5;


    insertionSort(arr,n);




    return 0;
}