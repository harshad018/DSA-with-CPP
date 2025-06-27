#include<iostream>

using namespace std;
//Recursive function.
void printElement( int arr[], int i, int n){

    cout<<arr[i]<<endl;
    i++;
    if ( i < n){
    printElement( arr,i , n);
    }else{
        return;
    }
}

int main(){


    int arr[7] = {1,2,3,4,5,6,7};


    printElement(arr,0,7);






    return 0;
}
