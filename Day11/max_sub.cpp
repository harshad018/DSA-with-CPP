#include<iostream>

#include <climits>

using namespace std;

void maxSubarraySum(int arr[], int n){

    int maxSum = INT_MIN;
    for ( int start = 0; start < n; start++){
        for ( int end = start; end < n; end++){
            int currSum = 0;
            for ( int i = start; i <= end; i++){
                currSum += arr[i];
            }
            cout<<currSum<<",";
            maxSum = max(maxSum,currSum);
        }
        cout<<endl;
    }
    cout<<"Maximum subarray sum is: "<<maxSum<<endl;
}

int main(){

    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    maxSubarraySum(arr, n);

    






    return 0;
}