#include<iostream>

#include <climits>

using namespace std;

void maxSubarraySum(int arr[], int n){

    int maxSum = INT_MIN;
    int currSum = 0;
    for ( int start = 0; start < n; start++){
        
       currSum += arr[start];
       maxSum = max( maxSum, currSum);

       if ( currSum < 0){
            currSum = 0;
       }
        
    }
    cout<<"Maximum subarray sum is: "<<maxSum<<endl;
}

int main(){

    int arr[4] = {-2,0,-1};
    int n = sizeof(arr)/sizeof(int);

    maxSubarraySum(arr, n);

    






    return 0;
}
