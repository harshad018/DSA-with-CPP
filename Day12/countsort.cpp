#include<iostream>
#include <climits>

using namespace std;


void printArray( int arr[], int n){
    for ( int i = 0; i < n; i++){
        cout<<arr[i]<<",";
    }

    cout<<endl;
}

void countSort(int arr[], int n){
    int freq[100000];//range

    int minVal = INT_MAX, maxVal = INT_MIN;
    for ( int i = 0; i < n; i++){
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]); 
    }
    
    //1st step
    for ( int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    //2nd step
    for (int i  = minVal,j=0; i <= maxVal; i++){
        while ( freq[i]>0){
            arr[j++] = i;
            freq[i]--;
        }
    }

    printArray(arr,n);
}

int main(){

    int arr[8] = {1,4,1,3,2,3,4,7};

    int n = 8;

    countSort(arr,n);






    return 0;
}