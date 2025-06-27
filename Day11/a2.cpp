#include<iostream>

using namespace std;

int binSearch(int arr[], int n , int key){

    int st = 0;
    int end = n - 1;

    while ( st <= end){

        

        int mid = (st + end)/2;
        
        if ( arr[mid] == key){
            return mid;
        }

        if (arr[st] <= arr[mid]){

            if ( arr[st] <= key && key < arr[mid]){
                end = mid - 1;
            }else{
                st = mid + 1;
            }



        }else{
            if ( arr[mid] < key && key <= arr[end]){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        
    }

    return -1;


}

int main(){

    int arr[7] = {4,5,6,7,0,1,2};
    int n = sizeof(arr)/sizeof(int);


    cout<<binSearch(arr, n, 3)<<endl;


    return 0;
}