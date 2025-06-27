#include<iostream>

using namespace std;

void swap(int arr[], int st, int end){

    int temp;

    temp = arr[st];
    arr[st] = arr[end];
    arr[end] = temp;


}

void reverseArr( int arr[], int n ){
    int st = 0;
    int end = n-1;


    while ( end >= st ){

        swap (arr, st, end);
        st++;
        end--;


    }

    for ( int i = 0; i < n; i++){


        cout<<arr[i]<<endl;
    }
}

int main(){

    int arr[] = {5,4,3,9,2};
   int n = sizeof(arr)/sizeof(int);

    reverseArr(arr, n);
   

    return 0;
}