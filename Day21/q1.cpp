#include<iostream>
#include<vector>
using namespace std;
void merge ( string arr[], int si, int mid, int ei){
    vector<string> temp;
    int i = si;
    int j = mid + 1;


    while ( i <= mid && j <= ei){
        if ( arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }


    while ( i <= mid){
        temp.push_back(arr[i++]);
    }

    while ( j <= ei){
        temp.push_back(arr[j++]);
    }


    //vector -> original array

    for ( int i = si, x = 0; i <= ei ;  i++){
        arr[i] = temp[x++];
    }
}
void mergeSort(string arr[], int si, int ei){

    if ( si >= ei){return;}
    int mid = si + (ei - si)/2;



    mergeSort(arr, si, mid); //right half
    mergeSort(arr, mid + 1 , ei);//left half


    merge(arr, si, mid, ei);//conquer
}
void printArray(string arr[], int n){
    for ( int i = 0; i < n ; i++){
        cout<<arr[i]<<", ";
    }

    cout<<endl;
}
int main(){

    string arr[4] = { "sun", "earth", "mars", "mercury" };
    int n = 4;

    mergeSort(arr,0,n-1);
    printArray(arr,n);

    return 0;
}
