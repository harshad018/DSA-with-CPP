#include<iostream>

#include <climits>

using namespace std;

void maxSubarraySum(int arr[], int n){

    int profit = 0;
    int maxProfit = 0;
    for ( int start = 0; start < n; start++){
       
      for ( int end = start; end < n; end++){

            profit = arr[end] - arr[start];
            maxProfit = max(profit,maxProfit);

      }
        
    }
    if ( maxProfit <= 0){
        cout<<"Profit is 0"<<endl;

    }else{
        cout<<"Profit is: "<<maxProfit<<endl;
    }
}

int main(){

    int arr[6] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(int);

    maxSubarraySum(arr, n);

    






    return 0;
}